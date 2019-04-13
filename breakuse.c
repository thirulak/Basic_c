#include <stdio.h>
int main()
{
  int i=1,j=1;
  while(i++ <=10)
  {
    while(j++ <=20)
    {
      if(j==5)
        break;
      //if_the_given_number_equals_to_5_then_the_loop_breaks
      //once_the_break_worked_the_control_returns_to_increment_i_value
      //that_is_it_goes_to_the_startline_after_int main()
      //Ex:output changes from 24 to 36 when j==5
      else
        printf("%d%d\n",i,j);
    }
  }
  return 0;
}
