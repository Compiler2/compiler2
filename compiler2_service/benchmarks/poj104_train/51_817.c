#define NUM_ITER 1144876

#include <header.h>

int main_bench()
{
	int i,j,n,m,k,l;
	int a[500];
	char c[500],e[6];
	char d[500][6];
	my_scanf("%d",&n);
	my_scanf("%s",c);
	m=strlen(c);
	for(i=0;i<m-n+1;i++)
	{
		a[i]=0;
		for(j=0;j<n;j++)
			d[i][j]=c[i+j];
	}
	for(i=0;i<m-n+1;i++)
	{
		for(j=i+1;j<m-n+1;j++)
		{
			for(k=0,l=0;k<n;k++)
			{
				if(d[i][k]!=d[j][k])
				{l=1;break;}
			}
			if(l==0)
			{
				a[i]++;
			}
		}
	}
	for(i=0;i<m-n+1;i++)
	{
		for(j=i+1;j<m-n+1;j++)
		{
			if(a[j]>a[i])
			{
				l=a[i];a[i]=a[j];a[j]=l;
				strcpy(e,d[i]);strcpy(d[i],d[j]);strcpy(d[j],e);
			}
		}
	}
	if(a[0]==0)
		my_printf("NO\n");
	else
	{
	my_printf("%d\n",a[0]+1);
	my_printf("%s\n",d[0]);
	for(i=1;i<m-n+1;i++)
	{
		if(a[i]==a[0])
			my_printf("%s\n",d[i]);
		else
			break;
	}
	}
	return 0;
}