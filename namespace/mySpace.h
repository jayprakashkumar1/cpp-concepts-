namespace mySpace              // user made mySpace
{
    int a;
    void f1();
class insideMySPace
{
    public: 
             void fun1();
};
}
using namespace mySpace;             // including namespace mySpace from same file.
                                     // if mySpace is declared in other file then must include it. 
 
void mySpace::f1()
{
    cout<<"\nHello f1 ";
}
void mySpace::insideMySPace::fun1()
{cout<<" \nhello fun1 ";}
