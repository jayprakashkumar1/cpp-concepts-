#include<iostream>
#include<string>
#include<cmath>
#include<cstdio> 
using namespace std;

// class student 
class student
{
    private: 
                string name;
                int age;
    public:
                void setStudent(string s,int a)
                {
                    name=s;
                    age=a;
                } 
                void show()
                {
                    cout<<"Name: "<<name<<endl;
                    cout<<"Age: "<<age<<endl;
                }
};

int main()
{
// creating pair 
    pair<string,int>p1;          // first one is string ,second is int
    pair<string,string>p2;
    pair<string,float>p3("Drilling in c",540.50);   // you can initialise directly
    pair<int,student>p4;

cout<<"\nP3: "<<p3.first<<" "<<p3.second<<endl;
//inserting value , data type wise
// make_pair(data1,data2)      , a/c to declaration type

p1=make_pair("Jay",19);             // name,age
p2=make_pair("India","New Delhi");
p3=make_pair("Drilling in c++",452.30);

//creating object of student class
student s1;
s1.setStudent("Ankit",20);        

p4=make_pair(1,s1);     // int ,class 

// Accessing pair members 
// 1st : p1.first
// 2nd : p1.second
cout<<"P1 having: "<<p1.first<<" "<<p1.second<<endl;
cout<<"P2 having: "<<p2.first<<" "<<p2.second<<endl;
cout<<"P3 having: "<<p3.first<<" "<<p3.second<<endl;
cout<<"P4 having: "<<p4.first<<" ";                    
student s2=p4.second;
s2.show();
return 0;
}