#define NUM_ITER 10145

#include <header.h>



int main_bench()
{
	char name[105][20];
	int qimo[105];
	int banji[105];
	int lunwen[105];
	char xibu[105];
	char ganbu[105];
	int money[105]={0};
	int i,j,k,l,m,n,max=0;
	my_scanf("%d",&n);
	getchar();
	for (i=1;i<=n;i++)
	{
		my_scanf("%s %d %d %c %c %d",&name[i],&qimo[i],&banji[i],&ganbu[i],&xibu[i],&lunwen[i]);
	}
	for (i=1;i<=n;i++)
	{
		if (qimo[i]>80 && lunwen[i]>=1)
		{
			money[i]=money[i]+8000;
		}
		if (qimo[i]>85 && banji[i]>80)
		{
			money[i]=money[i]+4000;
		}
		if (qimo[i]>90)
		{
			money[i]=money[i]+2000;
		}
		if (qimo[i]>85 && xibu[i]=='Y')
		{
			money[i]=money[i]+1000;
		}
		if (banji[i]>80 && ganbu[i]=='Y')
		{
			money[i]=money[i]+850;
		}
	}
	for (i=1;i<=n;i++)
	{
		if (money[i]>max) max=money[i];
	}
	for (i=1;i<=n;i++)
	{
		if (money[i]==max)
		{
			my_printf("%s\n",name[i]);
			break;
		}
	}
	my_printf("%d\n",max);
	m=0;
	for (i=1;i<=n;i++)
	{
		m=m+money[i];
	}
	my_printf("%d\n",m);

	return 0;
}