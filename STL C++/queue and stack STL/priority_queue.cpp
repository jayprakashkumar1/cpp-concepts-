// priority_queue 
// designed such that it contain greater value at the top 
// i.e it gives as ascending order when poped
 
#include<iostream>
#include<algorithm>

#include<queue>                 // must include this header for queue

using namespace std;

void show(priority_queue<int>pq)
{
    priority_queue<int>temp=pq;
    while(!temp.empty())         
    {
        cout<<temp.top()<<" ";
        temp.pop();
    }

}
int main()
{
    priority_queue<int>pq1;        // priority_key 

    pq1.push(43);                 // insert element in the priority  queue
     pq1.push(4); 
      pq1.push(53); 
       pq1.push(97); 
        pq1.push(34); 
         pq1.push(67);

     show(pq1);              // showing 
                            // output:  97 67 53 43 34 4
    
    return 0;
}