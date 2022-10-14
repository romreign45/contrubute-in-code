//WAP to calculate sum and average of two arrays
#include<stdio.h>

int main()
{
	int n,i,sum=0,avg;
	printf("Enter limit: ");
	scanf("%d",&n);
	
    int ar[n];
	printf("Enter values in first array: ");
	for(i=0;i<n;i++)
	{scanf("%d",&ar[i]);
     sum+=ar[i];}
	 avg=sum/n; 
	
	printf("SUM of all elements in array is %d\nAverage of elements is %d",sum,avg);
return 0;
}
