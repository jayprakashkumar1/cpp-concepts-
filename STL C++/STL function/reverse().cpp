#include<iostream>
#include<algorithm>           // must include this header <algorithm>
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

    reverse(arr,arr+10);         // first address,last address

    show(arr,10);

    return 0;
}