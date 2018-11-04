// header files 

#include<iostream>
#include<stack>
#include<cstring>
#include<string>
#include<math.h>   // for math calculation like ' pow ' here 

#define size 100000   // assuming size of binString as 100000 

using namespace std;

// function for converying binary to decimal
 
int covertBinaryToInt(char binString[])
{

 	stack<int> s;

	int res=0;

// length finding
	
	int l=strlen(binString);

// since total length of binString is l
// so weight of right most digit will be 0 and
// weight of left most digit will be l-1 

// HENCE weight will be as : l-1,l-2 l-3,.......3,2,1,0
        
// Now we know each bit from binString and
// also weight of each binary digit now.

// so now apply the formula as given in  question 
// for converting binary to decimal

 // starting from last digit 
 // i.e from right most digit
  // and moving left towards MSB(MOST SIGNIFICANT BIT).

int weight=0,digit,i;

// finding decimal equivalent of binary string

for(i=l-1;i>=0;i--)    
{

// extracting decimal digit from ascii value by substracting 48 

digit=binString[i]-48;

// applying conversion formula 

res=res+digit*pow(2,weight);

//weight will be increased by one each time on moving from right to left  
  weight++;

}

// returning ans 
    return res;
}

// main function
int main()
{
// str declaration 

  char str[size];

  cout<<"Enter binary number : ";
  cin>>str;

// function calling on passing str 

  int decimal= covertBinaryToInt(str);  

  cout<<"\nDECIMAL NUMBER: "<<decimal<<endl;

// returning from main function 
return 0;
}
