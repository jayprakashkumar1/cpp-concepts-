// header files
#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;
// class student

class student
{
    private: 
              string rollNo,name;

// class 'address' is private for 'student' class 
// 'address' class
              class address
              {
                   private: 
                            string street,state,pincode;

                   public:
                            void setAddress()
                            {
                                
                                cout<<"Enter street: ";
                                getline(cin,street);      // space separated also input
                                cout<<"Enter state: ";
                                getline(cin,state);
                                cout<<"Enter pincode: ";
                                cin>>pincode;
                            }
                            void showAddress()
                            {
                                cout<<street<<" "<<state<<" "<<pincode<<endl;
                            }

              };
//making object of 'address' class

              address add1;          // object of address

// public member of student class    
    public: 
            void setRollNo()
            {   cout<<"Enter student Roll No: ";
                 getline(cin,rollNo);
            }
            void setName()
            {
                cout<<"Enter student name: ";
                getline(cin,name);
            }
            void setAddress()
            {
//inside public of student class ,
// calling add1.setAddress to set address
// becoz we can't access private member of 'address' class by member function of 'student' class
// 'private member' can be accessed only by OWN 'member function'.           
                add1.setAddress();
            }
            void show()
            {
                cout<<"\nName of student: "<<name<<endl;
                cout<<"Roll no. of student: "<<rollNo<<endl;
                cout<<"Address : ";

// calling showAddress of 'address' class to show address.                
                
                add1.showAddress(); // calling address class member function by add1 object to show address
                cout<<endl;   
            }

};

int main()
{
    // s1 os object of class student
    student s1;
// s1 can accessed only its own 'public member' 
// and member function can accessed only  its OWN 'member'    
    s1.setName();
    s1.setRollNo();
    s1.setAddress();
    s1.show();
    return 0;
}