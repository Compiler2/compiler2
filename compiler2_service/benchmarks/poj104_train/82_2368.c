#define NUM_ITER 36061

#include <header.h>

int main_bench()
{ int i,n,max ;
  max=0;
  my_scanf("%d",&n);
  int a[n],b[n],c[n];
  for (i=0;i<=n-1;i++)
   { my_scanf("%d%d\n",&a[i],&b[i]);
     if (90<=a[i] && a[i]<=140 && 60<=b[i] && b[i]<=90) 
	   if (i==0)  
		   c[i]=1;
	   else  c[i]=c[i-1]+1;
	 
	 else  c[i]=0;
	 if (c[i]>max)  
	   max=c[i];
   }
  my_printf("%d",max);
}