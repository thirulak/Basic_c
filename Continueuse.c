#include <stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=2;i++)
  {
    for(j=1;j<=2;j++)
    {
      if(i==j)
        continue;
        //when continue is encountered inside any loop
        //the control passes to the begining of the loop
        //remeber only within that loop it goes
        //when i==j the control passes to for(j=1;j<=2;j++)
        //and so the first o/p is 12 , where the j value alone gets incremented for the first time
        //the second o/p is 21 
      printf("%d%d\n",i,j);
    }
  }
  return 0;
}
