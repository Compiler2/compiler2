#define NUM_ITER 292551

#include <header.h>

int main_bench()
{
	int a[100],b;
	
	my_scanf("%d",&a[0]);
	for(b=0;b<100;b++)
	{
		if(a[b]%2!=0&&a[b]!=1)
		{
			a[b+1]=a[b]*3+1;
			my_printf("%d*3+1=%d\n",a[b],a[b+1]);
		}
		else if(a[b]%2==0)
		{
			a[b+1]=a[b]/2;
			my_printf("%d/2=%d\n",a[b],a[b+1]);
		}
		else
		{
			my_printf("End");
		
		break;
		}
	}
	
    return 0;
}

