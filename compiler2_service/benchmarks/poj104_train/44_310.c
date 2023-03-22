#define NUM_ITER 397278

#include <header.h>

 int reverse(int num)
{   
    int i=0;
   for (;num!=0;)   
   {
   i=i*10+num%10;
   num=num/10;
   }
   return (i);
}
   
main_bench()
{  
   int x[6],p[6],i;
   for (i=0;i<6;i++)
   my_scanf ("%d",&x[i]); 
   for (i=0;i<6;i++)
   {
       if (x[i]>=0)
          p[i]=reverse(x[i]);
       else 
          p[i]=-reverse(-x[i]);
    }
     for (i=0;i<6;i++)
    my_printf ("%d\n",p[i]);
    getchar ();
    getchar ();
 }
