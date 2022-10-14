//WAP to check whether a number is palindramic or not
#include<iostream>
using namespace std;
int main()
{                                                    //n=153        //m=5     //m=1
	int n,m,l=0,f;                                   //m=3          //l=35   //l=351
    cout<<"Enter the number: ";                    //l=3          //n=1    //n=0
    cin>>n;                                        //n=15
    f=n;                                             //assigning value of n to a different variable since n will 
	while (n>0)                                      //take other values
	{
	  m = n%10;                                      //m will store remainder
	  l = l*10 + m;                                  //l will store the number in reverse
	  n = n/10;                                      //n will store the value of Quotient
	}
 cout<<"It's Reverse is "<<l<<endl;
 if(l==f)
 {cout<<f<<" is Palindrome"<<endl;
 }
 else
 {cout<<f<<" is not palindrome";}
 
  return 0;
}
