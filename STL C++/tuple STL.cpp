
// compile the code with following line 
//      g++ -std=c++11 'fileName.cpp'

#include<iostream>
#include<string>
#include<tuple>           // include 'tuple' header file 
using namespace std;
int main()
{
    // tuple :like pair but it can have multiple values together 
    // making tuple
    tuple<string,int,int>t1;         // three value : string ,int ,int

// inserting values    
    t1=make_tuple("India",11,1);

// accessing values
// by get<0>(t1)
//    get<1>(t1)
//    ...       
    cout<<get<0>(t1)<<" ";
    cout<<get<1>(t1)<<" ";
    cout<<get<2>(t1)<<" ";
    return 0;
}