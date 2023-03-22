#define NUM_ITER 4665

#include <header.h>

int main_bench()
{
	int n,i,j,cal=0,enter=1,num=0;
	int a[100001]={0},b[100001]={0};
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=num;j++)
		{
			if (a[i]==b[j])
			{
				goto next;
				break;
			}
		}
		if (enter==1)
		{
			my_printf ("%d",a[i]);
			enter=0;
		}
		else
			my_printf (" %d",a[i]);
		num++;
		b[num]=a[i];
next:
		b[0]=0;
	}
	return 0;
}