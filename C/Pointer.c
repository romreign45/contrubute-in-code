#include<stdio.h>
int main()
{
  int x,y; int *ptr1,*ptr2; char c;
  ptr1=&x; ptr2=&y;
  printf("Select Any Operation\n");
  printf("Type * for Multiplication\n");
  printf("Type + for Addition\n");
  printf("Type - for Subtraction\n");
  printf("Type / for Division\n");
  scanf("%c",&c);
  printf("Enter any two numbers\n");
  scanf("%d %d",&x,&y);
  switch(c)
  {
  case '+':
      printf("%d + %d = %d",x,y,(*ptr1+*ptr2));
      break;
  case '-':
      printf("%d - %d = %d",x,y,(*ptr1-*ptr2));
      break;
  case '*':
      printf("%d * %d = %d",x,y,(*ptr1**ptr2));
      break;
  case '/':
      if(*ptr2==0)
      { printf("Answer tends to infinity");
        return 0;
      }
      printf("%d / %d = %0.2f",x,y,(*ptr1/(float)*ptr2));
      break;
  default:
    printf("Invalid Choice");
  }
  return 0;
}
