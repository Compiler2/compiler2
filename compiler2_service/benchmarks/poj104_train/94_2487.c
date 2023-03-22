#include <header.h>

int max(int a[500],int m,int n)
{
    int i;
    int j=0;
	for(i=n;i<m;i++)
	{
		if(a[i]<a[n])
		{
			j=a[n];
			a[n]=a[i];
			a[i]=j;
		}
	}
	return a[500];
}
int main_bench()
{
	int a[500];
	int b[500];
	int i,j;
	int m,n;
	my_scanf("%d",&m);
	for(n=0;n<m;n++)
	{
		my_scanf("%d",&a[n]);
	}
	i=0;
		for(j=0;j<m;j++)
		{
			if(a[j]%2==1)
			{
				b[i]=a[j];
				i++;
			}
		}
		j=0;
		n=0;
		for(j=0;j<i+1;j++)
		{
			max(b,i+1,j);
		}
		for(n=1;n<i;n++)
		{
			my_printf("%d",b[n]);
			my_printf(",");
		}
		my_printf("%d",b[i]);
		return 0;
}
