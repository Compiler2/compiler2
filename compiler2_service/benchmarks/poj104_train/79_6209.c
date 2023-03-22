#define NUM_ITER 27497

#include <header.h>

int main_bench()
{
   int n, m, i, s,j=-1;
   while(j!=0)
   {
	   s=0;
	   my_scanf("%d %d", &n,&m);
	   if(m==0)j=0;
	   else
		   if(n==1)my_printf("1\n");

	       else
		   {
		       j=-1;
	           for(i=2; i<=n; i++)s=(s+m)%i;
               my_printf ("%d\n", s+1);
		   } 
   }

}