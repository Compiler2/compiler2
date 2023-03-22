#include <header.h>

int check(int b[],int len,int x)
{
	int i,flag=1;
	for(i=0;i<len;i++)
	{
		if(b[i]==x)
		{
			flag=0;
			return 0;
			break;
		}
	}
	if(flag)
		return 1;
}
int main_bench()
{
	int j,i,n;
	int a[20100],b[20100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	b[0]=a[0];
	j=1;
	for(i=1;i<n;i++)
	{
		if(check(b,j,a[i]))
		{
			my_printf(" %d",a[i]);
			b[j]=a[i];
			j++;
		}
	}

	return 0;
}