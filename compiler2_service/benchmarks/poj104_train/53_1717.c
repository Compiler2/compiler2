#include <header.h>

int main_bench()
{
	int a[310]={0};
	int i,j,k=0;
	int t;
	int n;
	int num;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&num);
		for(j=0;j<i;j++)
		{
			t=1;
			if(a[j]==num)
			{	t=0;	break;	}
		}
		if(i==0)
			a[k++]=num;
		else
		{
			if(t==1)
				a[k++]=num;
		}
	}
	if(k==1)
		my_printf("%d\n",a[0]);
	else
	{
		my_printf("%d",a[0]);
		for(i=1;i<k;i++)
			my_printf(",%d",a[i]);
		putchar('\n');
	}
	return 0;
}


