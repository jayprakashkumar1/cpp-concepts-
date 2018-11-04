
//string STL implementation in c++

#include<iostream>
#include<string.h>
#include<string>          // string header file

using namespace std;
int main()
{
      string s1="hello";
      char str[]=" students";
        string s2=s1+str;               // c string can be used with c++ string
        
// assign()

string s3;
s3.assign(" hello Boys");        

// append()
s1.append(" ,girls");      // or s1+=" ,girls";

// insert()
s1.insert(2,"123");       // insert 123 from index 2 and rest shift right sides
       
// replace()
string s4("hellostudents");
s4.replace(1,3,"123");   

// erase()
s4.erase();                          // after this all will be deleted

//find()           // returns the first matching index from  begining. 

string s5="hello online online students";
int index=s5.find("online");                   // index=6

index=s5.find("Teacher");                     // -1 ,because not found 

// rfind()           // returns the first matching index from last.
index=s5.rfind("online"); 

// compare()
string s6("Amit");
string s7("Amar");
int result=s6.compare(s7);               // result > 0  ,because ascii of i=105,a=97

result=s7.compare(s6);                  // result < 0 

string s8="Amit";
result=s6.compare(s8);                  // result = 0 

// c_str()
string s9("hello");
char str9[10];
strcpy(str9,s9.c_str());

// size()
int size=s9.size();
cout<<size;

}
