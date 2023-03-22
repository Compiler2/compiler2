#include <header.h>

int main_bench()
{
	char a[502];
	char b[502][6];
	int d[502]={0};
	int n,c,e,i,j;
	my_scanf("%d\n",&n);
	gets(a);
	c=(int)strlen(a);
	for(i=0;i<=c-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	for(i=0;i<502;i++)
	{
		b[i][n]='\0';
	}
	for(i=0;i<=c-n;i++)
	{
		for(j=i;j<=c-n;j++)
		{
			if((int)strcmp(b[i],b[j])==0)
			{
				d[i]++;
			}
		}
		
	}
	e=0;
	for(i=0;i<=c-n;i++)
	{
		if(d[i]>e)
		{
			e=d[i];
		}
	}
	if(e==1)
	{
		my_printf("NO");
	}
	else
	{
		my_printf("%d\n",e);
	for(i=0;i<=c-n;i++)
	{
		if(d[i]==e)
		{
			for(j=0;j<n;j++)
			{
				my_printf("%c",b[i][j]);
			}
			my_printf("\n");
		}
	}
	}
	return 0;
}