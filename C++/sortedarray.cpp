/*Program to arrange the elements of array in ascending order.*/
#include<iostream>
using namespace std;

int main()
{
int i,j,n,c;
cout<<"Enter the number of elements:";
cin>>n;
int ar[n];
cout<<"Enter elements of array: ";
for(i=0;i<n;++i)
 cin>>ar[i];	
for(i=0;i<n;++i)
{
	for(j=i+1;j<n;++j)
	{
		if(ar[i]>ar[j])
          { c=ar[i];
		    ar[i]=ar[j];
		    ar[j]=c;   }
	}
}
cout<<"Sorted Array is ";

for(i=0;i<n;++i)
	cout<<" "<<ar[i];

return 0;
}
