#define NUM_ITER 55356

#include <header.h>

int main_bench()
{
 long n,i,j,f,s=0;
 my_scanf("%d",&n);
 for (i=1;i<=n;i++)
   if (i%7!=0)
     {
     f=1;
     for (j=i;j!=0;)
       {
       if (j%10==7)
	 {
	 f=0;break;
	 };
       j=j/10;
       };
     if (f==1)
       s=s+i*i;
     };
   my_printf("%ld\n",s);
 }