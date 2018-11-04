#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;

// for only int 
// for making float or char
// other struct have to be made

// so why not a single code for all data types.

// see below template implementation  

// class arrayList
// {
//     private: 
//              struct controlBlock
//              {
//                  int capacity;
//                  int *arrPtr;
//              };
//              controlBlock *s1;
//     public: 
// //constructor
//                 arrayList(int capacity)
//             {
//                 s1=new controlBlock;
//                 s1->capacity=capacity;
//                 s1->arrPtr=new int[s1->capacity];
//             }
//             void addElement(int index,int data)
//             {
//                 if(index>=0 && index<s1->capacity)
//                 s1->arrPtr[index]=data;
//                 else
//                 cout<<"array index is not valid";
//             }
//             void viewList()
//             {
//                 for(int i=0;i<s1->capacity;i++)
//                 cout<<s1->arrPtr[i]<<" ";
//             }

// //destructor
//                 ~arrayList()
//             { 
//                 delete s1->arrPtr;
//                 delete s1;
//             }
// };
// int main()
// {
//     int x;
//     cout<<"How many numbers: ";
//     cin>>x;

//     arrayList list1(x);
    
//     list1.addElement(0,23);
//     list1.addElement(1,5);
//     list1.addElement(2,33);

// list1.viewList();
      
//     return 0;
// }

//FOR GENERIC  using template
// FOR ANY TYPES OF LIST DATA
// int or float or char

//template
template<class X>
class arrayList
{
    private: 
             struct controlBlock
             {
                 int capacity;
                 X *arrPtr;      // generic array
             };
             controlBlock *s1;
    public: 
//constructor
                arrayList(int capacity)
            {
                s1=new controlBlock;
                s1->capacity=capacity;
                s1->arrPtr=new X[s1->capacity];       // generic array
            }
            void addElement(int index,X data)
            {
                if(index>=0 && index<s1->capacity)
                s1->arrPtr[index]=data;
                else
                cout<<"array index is not valid";
            }
            void viewList()
            {
                for(int i=0;i<s1->capacity;i++)
                cout<<s1->arrPtr[i]<<" ";
            }

//destructor
                ~arrayList()
            { 
                delete s1->arrPtr;
                delete s1;
            }
};
int main()
{
    int x;
    cout<<"How many numbers: ";
    cin>>x;

// for making array as float 
    arrayList<float> list1(x);
    
    list1.addElement(0,23.3);
    list1.addElement(1,5.2);
    list1.addElement(2,3.3);

list1.viewList();

// for making array as char
//use <char>
arrayList<char>list(x);

cout<<endl;
list1.addElement(0,'J');
list1.addElement(1,'A');
list1.addElement(2,'Y'); 

list1.viewList();

//for making array as int 
// use <int>      
    return 0;
} 