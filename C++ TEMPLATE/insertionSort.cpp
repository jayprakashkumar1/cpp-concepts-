// Insertion sort

#include<iostream>
#include<string>
#include<cmath>
#include<cstdio>
using namespace std;

// making generalise form of arr type 
// i.e type= T

template<class T>
void insertionSort(T arr[],int n)
{
    int i,j;
// key is also T
    T key;
    for(i=1;i<n;i++)
    {   
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
    {    arr[j+1]=arr[j];
        j--;
    }
       arr[j+1]=key;
    }

}

int main()
{
    int arr1[]={2,6,1,9,0,12,3}; 
    float arr2[]={22.3,44.2,442.2,1.1,2.3,4.9,0.8}; 
int n1=sizeof(arr1)/sizeof(arr1[0]);
int n2=sizeof(arr2)/sizeof(arr2[0]);

    insertionSort(arr1,n1);
    insertionSort(arr2,n2);
int i;
    for(i=0;i<n1;i++)
    cout<<arr1[i]<<" ";

    cout<<endl;

     for(i=0;i<n2;i++)
     cout<<arr2[i]<<" ";    
    return 0;
}