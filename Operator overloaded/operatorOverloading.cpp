// header files
#include<iostream>
using namespace std;

// class Complex 
class Complex
{
    private:    // private data members
                double  real ,imaginary ;
    public: 
               //public method
               
                 Complex(double=0.0 , double=0.0);       // constructor 
                 void display();                         // To display complex number  
                 Complex operator+( Complex ) ;         // for addition
                 Complex operator-( Complex );          // for sub
                 Complex operator*( Complex );          // for mult
                 int operator==( Complex );             // check equality
                 int operator!=( Complex );            // check non-equality
};

// constructor defined here
Complex:: Complex(double x,double y)
{
    real=x;
    imaginary=y;
}
// diplay() function defined here
void Complex::display()
{
    if(imaginary<0)
    cout<<real<<imaginary<<"*i";
    else
    cout<<real<<"+"<<imaginary<<"*i";

}
//  + operator overloading 
Complex Complex::operator+( Complex c2)
{
     Complex Temp;      // for temporary
      Temp.real=real+c2.real; // asigning real part
     Temp.imaginary=imaginary+c2.imaginary; // assigining imaginary part
    return Temp;              // returning Temp
}
//  - operator overloading 
Complex Complex::operator-( Complex c2)
{
    Complex Temp;
     Temp.real=real-c2.real;
     Temp.imaginary=imaginary-c2.imaginary;
    return Temp;

}
//  * operator overloading 
Complex Complex::operator*( Complex c2)
{
    Complex Temp;
    Temp.real=real*c2.real;
    Temp.imaginary=imaginary*c2.imaginary;
    return Temp;
}
//  ==  operator overloading 

int Complex::operator==(Complex c2)
{
    if(real==c2.real && imaginary==c2.imaginary)
    return 1;
    return 0;
}
//  !=  operator overloading 
int  Complex::operator!=( Complex c2)
{
    if(real!=c2.real || imaginary!=c2.imaginary)
    return 1;
    return 0;
}
int main()
{
    // variables for complex number
    double real1,real2,imaginary1,imaginary2;

// user inputs
    cout<<"Enter real part of 1st complex Number: ";
    cin>>real1;
    cout<<"Enter imaginary part of 1st complex Number: ";
    cin>>imaginary1;

    cout<<"Enter real part of 2nd complex Number: ";
    cin>>real2;
    cout<<"Enter imaginary part of 2nd complex Number: ";
    cin>>imaginary2;

// object c1 and c2 
    Complex c1(real1,imaginary1);
    Complex c2(real2,imaginary2);

   cout<<"\nComplex number 1 : ";
    c1.display();
   cout<<"\nComplex number 2: ";
    c2.display();
    
    Complex add,sub,mult;
    int equal,notEqual;
// operation 

     add=c1+c2;    // addition 
    sub=c1-c2;    // subtraction
    mult=c1*c2;    // mult
    equal=c1==c2; // check c1==c2 
    notEqual=c1!=c2;  //check c1!=c2

    cout<<"\nAddition of two complex number : ";
    add.display();
    cout<<"\nsubtraction of two complex number : ";
    sub.display();
    cout<<"\nMultiplication  of two complex number : ";
    mult.display();

    if(equal==1)
    {
        cout<<"\ncomplex number c1 is equal to complex number 2";
    }
    if(notEqual!=1)
    {
        cout<<"\ncomplex number c1 is NOT equal to complex number 2";
    }
    // returning from main
    return 0;
}

