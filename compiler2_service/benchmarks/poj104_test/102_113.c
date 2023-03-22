#include <header.h>

int main_bench()
{
	int n,i,j,k,boys,girls;
	char tmp[10];
	float boy[45],girl[45];
	float shengao,temp;
	my_scanf("%d",&n);
	getchar();
	for(i=1,j=1,k=1;i<=n;i++)
	{
		my_scanf("%s",tmp);
		my_scanf("%f",&shengao);
		if(tmp[0]=='f')
		{
			girl[j]=shengao;
			j++;
		}
		else if(tmp[0]=='m')
		{
			boy[k]=shengao;
			k++;
		}
	}
	boys=k-1;
	girls=j-1;
	for(j=1;j<=boys-1;j++)
	{
		for(i=1;i<=boys-j;i++)
		{
			if(boy[i]>boy[i+1])
			{
				temp=boy[i];
				boy[i]=boy[i+1];
				boy[i+1]=temp;
			}
		}
	}
	for(j=1;j<=girls-1;j++)
	{
		for(i=1;i<=girls-j;i++)
		{
			if(girl[i]<girl[i+1])
			{
				temp=girl[i];
				girl[i]=girl[i+1];
				girl[i+1]=temp;
			}
		}
	}
	for(i=1;i<=boys;i++)
	{
		my_printf("%.2f ",boy[i]);
	}
	for(i=1;i<=girls;i++)
	{
		if(i==girls)
		{
			my_printf("%.2f\n",girl[i]);
		}
		else
		{
			my_printf("%.2f ",girl[i]);
		}
	}
	return 0;
}