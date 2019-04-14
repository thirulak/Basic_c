#include <stdio.h>
void printxy(int x, int y);

int main()
{
  int x,y;
  printxy(x,y);
  return 0;
}
void printxy (int x, int y)   {
      int *ptr; //pointer is created which contain integer value.
      x = 0; //value of x = 0 here.
      ptr = &x; // ptr point to variable which has 0 
      y = *ptr; // y contain value pointed by ptr i.e. x= 0;
      *ptr = 1; // value pointer by ptr is now set to 1 i.e. x= 1;
      printf("%d%d",x,y); // print x,y = x= 1 y=0
}
