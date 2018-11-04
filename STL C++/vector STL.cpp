// vector STL in c++
// it is dynamic array

// size of vector becomes double to its previous size once it fulls.
//i.e initially capacity=0
// when insert 1 element capacity=1
// when insert 1 more element capacity=2
// when insert 1 more element capacity=4
// when insert 1 more element capacity=8
// ...

#include<iostream>
#include<string> 
#include<vector>             // heder files 
using namespace std;
int main() 
{
    vector<int>v1;            // zero size length vector
    vector<int>v2(5);         // create a 5 element of int type
    vector<char>ch1(4);      // creates a 4 character vector
    vector<char>ch2(6,'a');  // initialise all 6 elements with character 'a'

//1. subscript operator []
vector<string>v3(3,"hello");
for(int i=0;i<3;i++)
cout<<v3[i]<<" ";                 // v3[]

cout<<endl;
//2. push_back()
vector<int>v4;
cout<<"current capacity = "<<v4.capacity()<<endl;          // 0
v4.push_back(10);
cout<<"current capacity = "<<v4.capacity()<<endl;       // 1
v4.push_back(20);
cout<<"current capacity = "<<v4.capacity()<<endl;       //2
v4.push_back(30);
cout<<"current capacity = "<<v4.capacity()<<endl;        //4
v4.push_back(40);
cout<<"current capacity = "<<v4.capacity()<<endl;        //4
v4.push_back(50);
cout<<"current capacity = "<<v4.capacity()<<endl;        //8

//3. pop_back()         // capacity remains same even on pop_back()
v4.pop_back();
cout<<"After pop: current capacity = "<<v4.capacity()<<endl;        //8
v4.pop_back();
cout<<"After pop: current capacity = "<<v4.capacity()<<endl;        //8
v4.pop_back();
cout<<"After pop: current capacity = "<<v4.capacity()<<endl;        //8
v4.pop_back();
cout<<"After pop: current capacity = "<<v4.capacity()<<endl;        //8
v4.pop_back();
cout<<"After pop: current capacity = "<<v4.capacity()<<endl;        //8
cout<<endl;

//4. size()
vector<int>v5;
for(int i=0;i<10;i++)
v5.push_back(10*i+10);

for(int i=0;i<v5.size();i++)        //v5.size()
cout<<v5[i]<<" ";
cout<<endl;

//5. clear()
v5.clear();
cout<<"After clear() : ";
for(int i=0;i<v5.size();i++)
cout<<v5[i]<<" ";
cout<<endl;

//6. at()
cout<<"\nNew string array: ";
vector<string>str1={"jay","ankit","Nishant","LOL"};
for(int i=0;i<str1.size();i++)
cout<<str1[i]<<" ";
cout<<"\nvalue at index 2 : "<<str1.at(2)<<endl;
    
//7. front() and back()

cout<<"\nFirst value in string array : "<<str1.front();
cout<<"\nLast  value in string array : "<<str1.back();
cout<<endl;
    
//8.iterator
vector<string>::iterator it = str1.begin();      // it will point at the begining 

str1.insert(it+2,"Iterator_inserted");

cout<<"\nAfter iterator insertion string : "<<endl;
for(int i=0;i<str1.size();i++)
cout<<str1[i]<<" ";    

// returning from main function

    return 0;
}
