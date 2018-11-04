// since pair have two values: first second
// tuple have multiple values: first,second,third,fourth,..

// these all represent a single data
// so when you want to pass 'single set of data' to a function
//instead of multiple data separately
//use tuple

// when you want to return 'multiple value'

// example of passing single set of data to a function and also returning multiple data.


//TO compile 
//   g++ -std=c++11 'when\ to\ use\ tuple\ and\ pair.cpp'

#include<iostream>
#include<string>
#include<tuple>
using namespace std;

// functin having multiple return value
tuple<string,float>func1(tuple<string,int,float>t)
   {
       tuple<string,float>temp;
       if(get<1>(t)>=20 && get<1>(t)<=24)
       temp=make_tuple(get<0>(t),get<2>(t));

       else temp=make_tuple("",-1);
       return temp;
   }

int main()
{
    int age=23;
    string name="jay";
    float marks=87.5;

// making tuple 
    tuple<string,int,float>t1(name,age,marks);
// making typle type of returning as name and marks
// if 20<=age<=24

    tuple<string,float>t2;
// calling function on passing tuple t1
// return value as tuple t2
// so multiple return value
    t2=func1(t1);

    cout<<get<0>(t2)<<" "<<get<1>(t2)<<endl;

    return 0;
}

