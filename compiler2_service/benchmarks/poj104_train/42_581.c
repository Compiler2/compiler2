#include <header.h>

main_bench()
{
   int n,a[100000],m,i,j,*p,s=0;
   my_scanf("%d",&n);
   for(i=0;i<n;i++)
   my_scanf("%d",a+i);
   my_scanf("%d",&m);
   for(i=0;i<n-s;i++)
   {   if(*(a+i)==m)
       {   for(j=i;j<n-s;j++)
	    *(a+j)=*(a+j+1);
	   s++;
	   i--;
       }
   }
   for(i=0;i<n-s-1;i++)my_printf("%d ",*(a+i));
   my_printf("%d",*(a+i));
}