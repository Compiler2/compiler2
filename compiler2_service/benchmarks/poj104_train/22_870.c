#define NUM_ITER 1213265

#include <header.h>

int main_bench()
{
   int n,a=0,b=-1,i=0;
   char c=',';
   while(c==',')
   {
      my_scanf("%d%c",&n,&c);
      if(n>a)
      {
         b=a;
         a=n;
         }
      else if(b<=n&&n<a)
         b=n;
      i++;
   }  
   if(i==1||b==-1||b==0)
      my_printf("No");
   else 
      my_printf("%d",b);
    my_scanf("%d%c",&n,&c);
    return 0;   
}
