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
    int arr[10]={14,5,74,45,12,36,8,19,63,27}; 
    show(arr,10);
    cout<<endl;

 // start address,end address of array/vector
 // return address of max or min element accordingly.

     int maximum=*max_element(arr,arr+10);    // That's why * for value
     int minimum=*min_element(arr,arr+10);

cout<<"Maximum element : "<<maximum<<endl;
cout<<"Minimum element : "<<minimum<<endl;

return 0;
}