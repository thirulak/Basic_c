#include <stdio.h>
int main()
{
  unsigned char ch;
  for(ch=0;ch<=5;ch++)
    printf("%d%c\n",ch,ch);
    printf("%d%c\n",ch,ch);
 return 0;
}
//Character printed in %d gives ASCII value of that character. And in %c it gives character value.
//The actual program range is ch<=254

