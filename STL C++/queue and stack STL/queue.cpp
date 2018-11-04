#include<iostream>
#include<algorithm>
#include<queue>                 // must include this header for queue

using namespace std;

void show(queue<int>q)
{
    queue<int>temp=q;
    while(!temp.empty())         
    {
        cout<<temp.front()<<" ";
        temp.pop();
    }

}
int main()
{
    queue<int>q1;

    for(int i=0;i<10;i++)
    q1.push(i);                 // insert element in the queue
   
     show(q1);
    
    return 0;
}