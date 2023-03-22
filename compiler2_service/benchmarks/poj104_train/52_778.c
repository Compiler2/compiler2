#define NUM_ITER 55248

#include <header.h>

int main_bench()
{   
	int m,n;
	my_scanf("%d %d\n",&n,&m);
    int i,a[100];
	for(i=0;i<n;i++)
	{
	    my_scanf("%d",&a[i]);
	}
    int*point;
	
	
      
	
	
	
	
	
	
	for(point=&a[n-m];point<a+n;point++)
	{
		my_printf("%d ",*point);
	}
	for(point=a;point<a+n-m-1;point++)
	{
		my_printf("%d ",*point);
	}
	my_printf("%d\n",a[n-m-1]);
	return 0;
}
