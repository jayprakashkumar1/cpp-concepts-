#include<iostream>
#include<algorithm>           // must include this header <algorithm>
using namespace std;
void show(int a[])
{
    for(int i = 0; i < 10; ++i)
        cout << a[i] << " ";
}
int main()
{
    int arr[10]={14,5,74,45,12,36,8,19,63,27}; 
    show(arr);
    cqout<<endl;
// start address , end address    
    sort(arr,arr+10);        // sort() function   // based on quick sort internally

    show(arr);

    return 0;
}