#define NUM_ITER 1466516

#include <header.h>

int main_bench()
{
   int n,a,b,m1,m2;
   char q;
   my_scanf("%d",&a);
   m1=a;m2=-100;
   my_scanf("%c",&q);
   while (q==',') 
   {
     my_scanf("%d%c",&a,&q);
 
     if (a>m1) 
        {
         m2=m1;
         m1=a;
        } else 
        if ((a>m2)&&(a<m1)) 
        m2=a;
   }
  if (m2==-100)my_printf("No");else my_printf("%d\n",m2);
  
   
   return 0;    
    
}
