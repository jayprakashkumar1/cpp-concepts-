#include<iostream>
using namespace std;
// from different file 
#include</home/jay/Desktop/C++ /namespace/mySpace.h> // path including of user made namespace mySpace.h 

// namespace mySpace              // user made mySpace in same file 
// {
//     int a;
//     void f1();
// class insideMySPace
// {
//     public: 
//              void fun1();
// };
// }
// using namespace mySpace;             // including namespace mySpace from same file.
//                                      // if mySpace is declared in other file then must include it. 
 
// void mySpace::f1()
// {
//     cout<<"\nHello f1 ";
// }
// void mySpace::insideMySPace::fun1()
// {cout<<" \nhello fun1 ";}

int main()      // main function 
{
   cout<<"hello main";  
   a=4;
   cout<<"\na="<<a;
   f1();

   insideMySPace obj1;
   obj1.fun1();
 
    return 0;
}