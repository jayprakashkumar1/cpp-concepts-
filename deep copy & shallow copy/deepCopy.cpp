#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;
class Dummy 
{
    private: 
                int a,b ;
                int* p;
    public: 
            void setData(int x,int y,int z)
            {   a=x,b=y,*p=z;
            }
            void showData()
            {
                cout<<"a="<<a<<" b="<<b<<" *p="<<*p<<endl;
            }
//constructor
                Dummy()
            {   p=new int;           // make a memory location of type int
            }
                Dummy(Dummy &d)            // NB
             {
                 a=d.a,b=d.b;
                 p=new int;
                 *p=*(d.p);
             }  

//destructo
                ~Dummy()
            {
                delete p;
            }
};
int main()
{
    Dummy d1;
    d1.setData(2,4,5);         // 5 is the content of dynamically allocated  memory location.
    d1.showData();

// Deep copy ,i,e memory location valued get copied.
   Dummy d2=d1;          // d1 is passed as an argument to the constructor
    d2.showData();
    return 0;
}