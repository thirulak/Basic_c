#include <stdio.h>
#define AND && 
//We have created a macro using #define 
//Logical AND is used here 
#define ARRANGE (a>25 AND a<50)
int main()
{
  int a=30;
  if(ARRANGE)
    printf("within range\n");
  else 
    printf("out of range\n");
  return 0;
}
