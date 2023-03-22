#include <header.h>

int main_bench()
{
	int m,n;
	int a[10001];
	int *p;
	int i,j,k;
	int b,c;
	int s=0;
	p=&a[0];
	my_scanf("%d",&m);
	for(j=1;j<=m;j++)
	{
		my_scanf("%d %d",&b,&c);
		
		for(k=1;k<=b;k++)
		{
			for(i=1;i<=c;i++)
			{
				my_scanf("%d",p);
				if((k==1&&i!=1&&i!=c)||(k==b&&i!=1&&i!=c)||i==1||i==c)
				{
					s=s+*p;
				}
				p++;
			}

		}
		my_printf("%d\n",s);
		s=0;
		p=&a[0];

	}

	
	return 0;
}