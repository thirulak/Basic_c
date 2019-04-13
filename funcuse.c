#include <stdio.h>
void fun(int );
int main()
{
    int a=30 ,b=0;
    fun(b);
    //the function is called here so , if first prints the value
    //the fun() just needs an argument to be declared in it 
    //the variable has to be initialised 
    //it can be either fun(a) or fun(b)
    //here for easy understanding it is given as fun(b)
    printf("the value of a is %d\n",a);
    return 0;
}
void fun(int b)
{
  b=60;
  printf("%d\n",b);
}
/*this program can also be written as:
#include <stdio.h>
void fun(int );
int main()
{
    int a=30;
    fun(a);
    printf("the value of a is %d\n",a);
    return 0;
}
void fun(int b)
{
  b=60;
  printf("%d\n",b);
}
this also gives the same o/p
*/
