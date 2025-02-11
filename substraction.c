/// Substraction of two numbers using third variable

#include<stdio.h>
int main()
{
  int x=10, y=20,z;
  z=x-y;
  printf("Difference=%d",z);
}

/// Substraction of two numbers without using third variable

#include<stdio.h>
int main()
{
  int x=10,y=20;
  printf("Difference=%d",x-y);
}

/// Substraction of two numbers by taking values from user

#include<stdio.h>
{
  int x,y;
  printf("Enter first number");
  scanf("%d",&x);
  printf("Enter second number");
  scanf("%d",&y);
  printf("Difference=%d",x-y);
  // display in the format like 20 - 10 = 10
  printf("%d - %d = %d",x,y,x-y);
}
