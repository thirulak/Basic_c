#include <stdio.h>
#define FOUND printf("Virus\n");
//defined a macro
int main()
{
  char sign;
  printf("Enter a sign");
  scanf("%c",&sign);
  if(sign=='Y')
    FOUND
  else
    printf("safe\n");
  return 0;
}
