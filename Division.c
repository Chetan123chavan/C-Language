/// Division of two numbers using third variable

#include<stdio.h>
int main()
{
  int x=10, y=20,z;
  z=x/y;
  printf("Division=%d",z);
}

/// Division of two numbers without using third variable

#include<stdio.h>
int main()
{
  int x=10,y=20;
  printf("Division=%d",x/y);
}

/// Division of two numbers by taking values from user

#include<stdio.h>
{
  int x,y;
  printf("Enter first number");
  scanf("%d",&x);
  printf("Enter second number");
  scanf("%d",&y);
  printf("Division=%d",x/y);
  // display in the format like 10 / 20 = 30
  printf("%d / %d = %d",x,y,x/y);
}
