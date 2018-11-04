#include<iostream>
using namespace std;
class A
{
    private: 
                int a,b ;
                int *ptr;
    public: 

//constructor
                A()
            {
            }
                A(int x,int y,int z)
                {
                    ptr=new int;             // new memory location created dynamically
                    a=x,b=y,*ptr=z;          //member object points newly created memory location
                                          // That's why it is called dynamic constructor.
                }
            void showData()
            {cout<<"a="<<a<<" b="<<b<<" *ptr="<<*ptr<<endl;}    
};
int main()
{
    
    A a1,a2,a3(3,4,5);
    a3.showData();  
    return 0;
}