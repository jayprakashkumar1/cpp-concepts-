#include<iostream>
#include<algorithm>
#include<stack>                 // must include this header for stack

using namespace std;

void show(stack<int>q)
{
    stack<int>temp=q;
    while(!temp.empty())         
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }

}
int main()
{
    stack<int>q1;

    for(int i=0;i<10;i++)
    q1.push(i);                 // insert element in the stack
   
     show(q1);
    
    return 0;
}