[1]#include <stdio.h>
void printxy(int x, int y);

int main()
{
  int x,y;
  printxy(x,y);
  return 0;
}arra
void printxy (int x, int y)   {
      int *ptr; //pointer is created which contain integer value.
      x = 0; //value of x = 0 here.
      ptr = &x; // ptr points to variable which has 0 
      y = *ptr; // y contain value pointed by ptr i.e. x= 0;
      *ptr = 1; // value pointed by ptr is now set to 1 i.e. x= 1;
      printf("%d%d",x,y); // print x,y i.e:x= 1 y=0
}

[2]int main ()  {
      int array[] = {3, 5, 1, 4, 6, 2};
      int done = 0;
      int i;

      while (done == 0)  {
           done = 1;
           for (i=0; i<=4; i++)  {
                if (array[i] < array[i+1])  {
                       swap (&array[i], &array[i+1]);
                       done = 0;
                }
           }
           for (i=5; i>=1; i--)  {
                if (array[i] > array[i-1])   {
                      swap(&array[i], &array[i-1]);
                      done=0;
                }
           }
       }
       printf("%d", array[3]);
}
//the while loop terminates after making done=1 it happens after arranging all the array values in descending order
//and so it prints the ouptput as array[3]

[3] #include<stdio.h>
int main ()  {
         int m = 10; //m=10
         int n,n1; 
         n = ++m; //n=11,m=11
         n1 = m++; //n1=11,m=12
         n--;  //n=10   
         --n1; //n1=10
         n-= n1; //n=10-10=0
         printf("%d", n); 
         return 0;
}
