#include <header.h>

int main_bench()
{
	int a[300],i,k,max1 = 0,max2 = -1;
	for(i = 0;;i++)
	{
		my_scanf("%d",&a[i]);
		if(getchar()!=',')
			break;
	}
	for(k = 0;k<=i;k++)
	{
		if(a[k]>max1)
			max1=a[k];
	}
	for(k = 0;k<=i;k++)
	{
		if(a[k]<max1&&a[k]>max2)
			max2 = a[k];
	}
	if(max2>-1)
		my_printf("%d\n",max2);
	else
		my_printf("No\n");
}