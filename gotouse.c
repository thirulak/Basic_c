#include <stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
      for(j=1;j<=3;j++)
      {
        if(i==3 && j==3 && k==3)
          goto out;
        else
          printf("%d%d%d\n",i,j,k); 
      }
    }
  }
  out:
    printf("out of the loop\n");
    return 0;
}
//here goto is used as an easy way , the usage of goto is avoided
//as it easily violates the normal flow of execution 
      
