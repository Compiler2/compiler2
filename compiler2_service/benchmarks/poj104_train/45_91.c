#define NUM_ITER 58793

#include <header.h>

int main_bench()
{
   char x[50],y[50];
   int i;
   for(i=0;i<50;i++)
  {
   my_scanf("%c",&x[i]);
   if (x[i]==32)
   break;
   }
   for(i=0;i<50;i++)
  {
   my_scanf("%c",&y[i]);
   if (y[i]==32)
   break;
   }
   int m=strlen(x),a=0;
   for(i=0;i<50;i++)
   {
      if(y[i]==x[0])
      { a=i;
    break;}
    }
   my_printf("%d",a);  
   return 0; 
}