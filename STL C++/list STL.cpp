
// TO COMPILE in command line :   g++ -std=c++11 list\ STL.cpp           

// list STL implementations

// list class supports bidirectional linear list.
// list can be accessed front to back or back to front.
//some useful functions are:

// sort()            : to sort the elements
// size()            : to find size of list

// push_front()      : to insert at front 
// push_back()       : to insert at the last 

// pop_front()       : to pop from front 
// pop_back()        : to pop from back end

// reverse()         : to reverse the list
// remove()          : to remove particular list element
// clear()           : to clear the list

// header files
#include<iostream>
#include<string>

#include<list>                // list heder file

using namespace std;         // namespace std;
int main()
{
// list declaration    
    list<int>l0;
// list declaration & initialisation    
    list<int>l1{11,22,33,44,55};

cout<<"Initial list elements: ";

// accessing the list
// through iterator

list<int>::iterator p=l1.begin();          // p will point to begining of list l1

while(p!=l1.end())
cout<<*p++<<" ";        // p will contain address  so *p for printing the values
cout<<endl;

// size()
cout<<"Total list elements: "<<l1.size();

//inserting value to list
cout<<"\nAfter insertion two values to list: ";
l1.push_back(66);             // 66 at the last
l1.push_front(0);            // 0 at the starting

// accessing the list
p=l1.begin();         
while(p!=l1.end())
cout<<*p++<<" ";  
cout<<"\nTotal list elements: "<<l1.size();

l1.pop_front();
cout<<"\nAfter poping front value to the list: ";
p=l1.begin();         
while(p!=l1.end())
cout<<*p++<<" ";  
cout<<"\nTotal list elements: "<<l1.size();


l1.pop_back();       // pop_back()
cout<<"\nAfter poping back value to the list: ";

p=l1.begin();         
while(p!=l1.end())
cout<<*p++<<" ";  
cout<<"\nTotal list elements: "<<l1.size();

list<int>l2{33,11,67,3,98,23,46,10};

cout<<endl<<"\n\nList 2 elements without sorted: ";

list<int>::iterator p2=l2.begin();               // iterator declaration 
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<endl<<"List 2 elements after sorted: ";

l2.sort();           // sort()  : sort in ascending order

p2=l2.begin();          
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<endl<<"List 2 elements after reverse: ";

l2.reverse();        // reverse()

p2=l2.begin();          
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<endl<<"List 2 elements after removal of 46: ";

l2.remove(46);       // remove()

p2=l2.begin();          
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<endl<<"List 2 elements after removal of 100: ";

l2.remove(100);             // since 100 is not in the list . so no removal

p2=l2.begin();          
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<endl<<"List 2 elements after clear: ";
 
l2.clear();          // clear()

p2=l2.begin();          
while(p2!=l2.end())
cout<<*p2++<<" ";
cout<<endl;

cout<<"size of list2: "<<l2.size();
cout<<endl;   
    return 0;
}