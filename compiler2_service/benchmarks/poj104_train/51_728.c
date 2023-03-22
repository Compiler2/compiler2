#include <header.h>


int main_bench()
{
	int n,i,j,k,s,p[999]={0},m,w[99],x,l;
	char a[999];
	my_scanf("%d",&n);
	my_scanf("%s",a);
	l=strlen(a);
	for(k=0;k<n;k++)
	{
		a[l+k]='2';
	}
	for(i=0;i<=l-n;i++)
	{
		for(j=i+1;j<=l-n;j++)
		{
			s=0;
			for(k=0;k<n;k++)
			{
				if(a[i+k]!=a[j+k])
				{
					s=1;
					break;
				}
			}
			if(s==0)
			{
				p[i]++;
			}
		}
	}
	m=p[0];
	for(i=1;i<=l-n;i++)
	{
		if(m<p[i])
		{
			m=p[i];
		}
	}
	if(m>=1)
	{
	my_printf("%d\n",m+1);
	for(i=0;i<=l-n;i++)
	{
		if(p[i]==m)
		{
			for(k=0;k<n;k++)
			{
				my_printf("%c",a[i+k]);
			}
			my_printf("\n");
		}
	}
	}
	else my_printf("NO");
}