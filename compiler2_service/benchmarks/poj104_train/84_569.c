#include <header.h>

int main_bench()
{
   int k,i,e;
   int a[100];
   my_scanf("%d",&k);
   for(i=0;i<k;i++)
   {
	   my_scanf("%d",&a[i]);
   }
   for(i=0;i<k-1;i++)
	{
	   if(a[i]>a[i+1])
	   {
		   e=a[i+1],a[i+1]=a[i],a[i]=e;
	   }
   }

    for(i=0;i<k-2;i++)
	 {
	   if(a[i]>a[i+1])
	   {
		   e=a[i+1];
		   a[i+1]=a[i];
		   a[i]=e;
	   }
	}
	my_printf("%d\n",a[k-1]);
    my_printf("%d\n",a[k-2]);
	
    return 0;
}