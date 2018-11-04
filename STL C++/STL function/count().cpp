#include<iostream>
#include<algorithm>           // must include this header <algorithm>
#include <numeric>
using namespace std;
void show(int a[],int n)
{
    for(int i = 0; i < n; ++i)
        cout << a[i] << " ";
}
int main()
{
    int arr[10]={15,2,13,4,15,15,7,8,15,10}; 
    show(arr,10);
    cout<<endl;

// returns occurence of an element let's say 15
int count1=count(arr,arr+10,15);     

cout<<"occurence of 15 in array = "<<count1<<endl;

return 0;
}