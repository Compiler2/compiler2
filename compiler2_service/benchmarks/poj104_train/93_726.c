#define NUM_ITER 1827492

#include <header.h>

int main_bench()
{
int a,b,c,d;
my_scanf("%d",&a);
b=a%3;
c=a%5;
d=a%7;
if(b==0&c==0&d==0)my_printf("%d %d %d",3,5,7);
else if(b==0&c==0)my_printf("%d %d",3,5);
      else if(b==0&d==0)my_printf("%d %d",3,7);
            else if(c==0&d==0)my_printf("%d %d",5,7);
                  else if(b==0)my_printf("%d",3);
                        else if(c==0)my_printf("%d",5);
                              else if(d==0)my_printf("%d",7); 
                                   else my_printf("n");

return 0;

}