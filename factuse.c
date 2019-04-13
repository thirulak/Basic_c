#include <stdio.h>
int factorial (int);
int main()
{
  int a,fact;
  printf("enter any number");
  scanf("%d",&a);
  fact=factorial(a);
  //syntax is factorial(int); as we used int in this pgm
  printf("factorial value=%d\n",fact);
  return 0;
}
int factorial(int x)
{
  int f=1,i;
  for(i=x;i>=1;i--)
    f=f*i;
  return(f);
}
