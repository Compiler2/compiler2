#define NUM_ITER 1381837

#include <header.h>

char f(char x)
{
    
     if(x>='a')
     return x-'a'+'A';
     else
     return x;
     }
int main_bench( )
{
int  a,b,i;
char str[1000];
my_scanf("%s", str);
a=f(str[0]);
b=1;

for(i = 1; i < strlen(str); i++)
{
      if (a==f(str[i]))
      b++;
      else
      {
          my_printf("(%c,%d)",a,b);
          a=f(str[i]);
          b=1;
      }
      }
my_printf("(%c,%d)",a,b);


}
