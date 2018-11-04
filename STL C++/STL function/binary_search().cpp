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
// start address , end address    
    sort(arr,arr+10);        // sort() function   // based on quick sort internally

    show(arr,10);

// Let's say we want to search for 12

int check=binary_search(arr,arr+10,12);       // if number found , return 1, otherwise return 0

if(check==1)
cout<<"\n12 found in array ";
else
cout<<"\n12 not found in array ";   

// Let's say we want to search for 120
check=binary_search(arr,arr+10,120);       // if number found , return 1, otherwise return 0

if(check==1)
cout<<"\n120 found in array ";
else
cout<<"\n120 not found in array "; 

    return 0;
}