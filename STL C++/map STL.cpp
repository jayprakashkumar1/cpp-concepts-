//map implementation in STL class c++

// map are used to replicate(to make exact copy) associative array
// map contain sorted key-value pair in which key is unique and can't be changed.

// marks["jay"]=89;
// marks["Ankit"]=78;
// marks["Rahul"]=85;

// map always arrange its key in sorted ascending order.
// some useful functions :

// at(x)       : to find value at key x; 
// [x]          : to find value at index x;
// size()       : to find size
// empty()      : to check for empty map array
// insert()     : to insert key-value
// clear()      : to clear the array



#include<iostream>
#include<string>

#include<map>               // map header file 

using namespace std;
int main()
{
// declaraing map
map<int,string>customer;              // int is key type, string is value type

// inserting values    
    customer[101]="jay";
    customer[225]="Rahul";
    customer[150]="Ankit";

// declaring and initialising value at once
    map<int,string>c1{{101,"jay"},{225,"Rahul"},{150,"Ankit"}};

// Accessing by iterator
 map<int,string>::iterator p=customer.begin();               // p will point start index  

cout<<"value in associative array :\n";
while(p!=customer.end())
{
    cout<<p->first<<" : ";
    cout<<p++->second<<" \n";

}
cout<<endl;

cout<<"value at index 150 is "<<customer[150]<<endl;

// at()
cout<<"value at key 225 : "<<customer.at(225);
      
//size()
cout<<"\nTotal mapping in customer associative array : "<<customer.size()<<endl;

//empty()
if(customer.empty()==0)
cout<<"\nAssociative array not empty";
else
cout<<"Empty Associative array";

// insert()
//customer.insert(205,"Prem");            // error

// make pair for key-value

customer.insert(pair<int,string>{205,"Prem"});

p=customer.begin();               // p will point start index  

cout<<"\nAfter insertion , value in associative array :\n";
while(p!=customer.end())
{
    cout<<p->first<<" : ";
    cout<<p++->second<<" \n";

}
cout<<endl;

// clear()
customer.clear();

p=customer.begin();               // p will point start index  

cout<<"After clear , value in associative array :\n";
while(p!=customer.end())
{
    cout<<p->first<<" : ";
    cout<<p++->second<<" \n";

}
cout<<endl;


return 0;
}