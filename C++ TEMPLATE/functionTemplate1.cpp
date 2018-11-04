// maximum among two numbers
// either int or float or both

// METHOD 
//
 
// just write template<> before and make accordingly
//generalise the type.

#include<iostream>
//#include<string>
//#include<cmath>
//#include<cstdio>
using namespace std;

// here X and Y general data types  
template<class X,class Y>Y find_max(X a,Y b)
{
   // Y max1;
    // if(a>b)
    // max1=a;
    // else
    // max1=b;
    return a>b?a:b;
}

int main()
{
    int num1=554;
    float num2=215.6; 
    cout<<"max="<<find_max(num1,num2);

    return 0;
}