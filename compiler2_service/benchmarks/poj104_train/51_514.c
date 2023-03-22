#define NUM_ITER 872689

#include <header.h>

int main_bench()
{
	int n,i,l,j,e,c[600]={0},m,d=0,f=0;
	char a[600],b[600][5];
	my_scanf("%d",&n);
	my_scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
		b[i][n]='\0';
	}
	for(i=0;i<=l-n;i++)
	{
		for(j=i+1;j<=l-n;j++)
		{
			e=strcmp(b[i],b[j]);
			if(e==0)
			{
				c[i]++;
			}
		}
	}
	m=c[0];
	for(i=0;i<=l-n;i++)
	{
		if(c[i]>m) m=c[i];
	}
	if(m==0) my_printf("NO");
	else
	{
		my_printf("%d\n",m+1);
		for(i=0;i<=l-n;i++)
		{
			if(c[i]==m)
			{
				my_printf("%s\n",b[i]);
			}
		}
	}
	return 0;
}





