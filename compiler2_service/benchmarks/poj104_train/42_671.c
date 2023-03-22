#include <header.h>

int main_bench()
{
	int a[100000];
	int num,del,i,j;
	my_scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&del);
	for(i=0;i<num;i++)
	{
		if(a[i]==del)
		{
			for(j=i;j<num;j++)
			{
				a[j]=a[j+1];
			}
			num--;
			i--;
		}
	}
	my_printf("%d",a[0]);
	for(i=1;i<num;i++)
	{
		my_printf(" %d",a[i]);
	}
	return 0;
}
