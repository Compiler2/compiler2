#define NUM_ITER 7829

#include <header.h>

int main_bench()
{
	int a[300],b,i,d,e;
	my_scanf("%d",&b);
	my_scanf("\n");
    for(i=0;i<b;i++)
		my_scanf("%d",&a[i]);
    for(d=b-1;d>0;d--)
	{
	 for(e=1;e<=d;e++)
	 {
	 if(a[d-e]==a[d])
	 {
		a[d]=0;
	    break;
	 }
	 else  continue;
	 }
	}
    my_printf("%d",a[0]);
	for(i=1;i<b;i++)
    {
		if(a[i]!=0)
	my_printf(",%d",a[i]);
	}
	my_printf("\n");
}