#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;
class Dummy
{
    private: 
                int a,b ;
    public: 
            void setData(int x,int y)
            {   a=x,b=y;
            }
            void showData()
            {
                cout<<"a="<<a<<" b="<<b<<endl;
            }
//constructor
                Dummy()
            {   
            }

//destructo
                ~Dummy()
            {
            }
};
int main()
{
    Dummy d1;
    d1.setData(2,4);
    Dummy d2;
    d2=d1;                    // shallow copy i.e only values are copying 
    d2.showData();           //copy by  copy assignment operator NOT by copy constructor 
    return 0;
}