#include <header.h>

char a[100];
int b[9999];
void P(int m,int n)
{
	int i,j,k,l=0,p,temp1=0,temp2=0;
	for (i=m;i<=n;i++)
	{
		if (i!=2)
			for (j=2;j<=i/2;j++)
			{
				if (i%j==0)
				{
					temp1=1;
					break;
				}
			}
		if (temp1==0)
		{
			p=i;
			for (j=0;p>=10;j++)
			{
				a[j]=p%10;
				p=p/10;
			}
			a[j]=p;
			for (k=0;k<=j;k++)
			{
				if (a[k]!=a[j-k])
				{
					temp2=1;
					break;
				}
			}
			if (temp2==0)
			{
				b[l]=i;
				l++;
			}
		}
		temp1=0;
		temp2=0;
	}
	if (l==0)
		my_printf("no");
	else
	{
	for (i=0;i<l-1;i++)
	{
		my_printf("%d,",b[i]);
	}
	my_printf("%d",b[l-1]);
	}
}

int main_bench()
{
	int m,n;
	my_scanf("%d%d",&m,&n);
	P(m,n);
}