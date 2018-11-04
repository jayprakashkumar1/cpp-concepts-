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
    int arr[10]={1,2,3,4,5,6,7,8,9,10}; 
    show(arr,10);
    cout<<endl;
   
//accumulate() returns sum of previous and sum of given range elements.
// arr : start address
// arr+10 : end address
// 0      : initial sum   
   int sum=accumulate(arr,arr+10,0);
   cout<<"Sum="<<sum<<endl;
return 0;
}