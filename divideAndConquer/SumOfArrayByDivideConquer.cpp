// header files 
#include<iostream>
#include<cmath>
using namespace std;

// function to calculate sum 
float divide(float arr[],int l,int r)
{
// returning when only one number 
    if(r==l)
    return arr[l];
// if more than two numbers 
    if(r>l)
    {
       // total number n
        int n=r-l+1;

// checking for even odd
if(n%2==0)
{
  // dividing in two half parts   
    float sum=divide(arr,l,l+n/2-1)+divide(arr,l+n/2,r);
return sum;
}
else
{
      // dividing in two half parts   
    float sum=divide(arr,l,l+n/2)+divide(arr,l+n/2+1,r);
return sum;
}
}

}

// main function 
int main()
{
    // declaration
    int n,i;
    cout<<"How many total numbers: ";
    cin>>n;
    float arr[n];

cout<<"Enter "<<n<<" numbers: ";
// taking inputs number
for(i=0;i<n;i++)
cin>>arr[i];

// function calling 
float sum=divide(arr,0,n-1);

// printing sum 
cout<<"sum= "<<sum<<endl;
// returning from main function
          return 0;
}