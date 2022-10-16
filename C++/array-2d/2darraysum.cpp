/*Program to add the elements of array and print the sum of elements of array.*/
#include<iostream>
using namespace std;
int main()
{
    int a[2][2],b[2][2],c[2][2],i,j;
    cout<<"Enter values of 1st matrix: ";
    for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {
            cin>>a[i][j];
        }
      }
      cout<<"Enter values of 2nd matrix: ";
      for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {
            cin>>b[i][j];
        }
      }
       cout<<"Sum of 1st and 2nd matrix is:";
      for(i=0;i<=1;i++)
      {
        for(j=0;j<=1;j++)
        {  c[i][j]=a[i][j]+b[i][j];
          
           cout<<" "<<c[i][j];
        }
      }
      return 0;
}
