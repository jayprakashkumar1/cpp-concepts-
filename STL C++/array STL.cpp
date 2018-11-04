// heder files
#include<iostream>
#include<array>           // for array STL
using namespace std;
int main()
{
   // making arr of int type having size as 4
    array<int,4> arr{1,2,3,4};
    cout<<"Array elements: ";
    for(int i=0;i<=3;i++)
    cout<<arr[i]<<" ";

    // at() method 
    cout<<"\nvalue at index 2 is "<<arr.at(2);

    // [] operator  , same as normal array
    cout<<"\nvalue at index 3 is "<<arr[3];

    //front() and back() method
    cout<<"\nFront element: "<<arr.front();
    cout<<"\nBack element: "<<arr.back();

    // remember this  
    array<int,7>newArr{1,2,3,4};
    cout<<"\nnew uninitialised element: "<<newArr.back(); // it will give as output 0 becoz last elemet is not initialised. 

   // fill()
   array<int,5>arr1={1,2,3,4,5};
   arr1.fill(5);

   cout<<"\nArray elements is filled with 5 ,so now array value : "; 
   for(int i=0;i<=4;i++)
   cout<<arr1[i]<<" ";

   //swap() 
    array<int,6>arr2={1,2,3,4,5,6};
    array<int,6>arr3={9,8,7,6,5,4};    // arr3

    cout<<"\nBefore swapping : ";
     for(int i=0;i<=5;i++)
      cout<<arr2[i]<<" ";
      cout<<endl;


arr2.swap(arr3);        // swap()

     cout<<"After swapping : ";
        for(int i=0;i<=5;i++)
        cout<<arr2[i]<<" ";
        cout<<endl;
    // size()

    cout<<"size of arr3 : "<<arr3.size();
    cout<<endl;
    
    return 0;
}