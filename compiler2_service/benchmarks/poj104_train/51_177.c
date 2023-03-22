#include <header.h>

int main_bench()
{
	int a[500],i,j,k,m,n,max,z;
	char s[500][5],x[500];
	my_scanf("%d",&m);
	my_scanf("%s",x);
	n=strlen(x);
	for(i=0;i<=n-m;i++)
		for(j=0;j<=m-1;j++)
			s[i][j]=x[i+j];
	for(i=0;i<=n-m;i++)
		a[i]=1;
	for(i=0;i<=n-m-1;i++)
		for(j=i+1;j<=n-m;j++)
		{
			z=0;
			for(k=0;k<=m-1;k++)
			{
			
				if(s[i][k]==s[j][k])
				{
					z=1;
				}
				else
				{	z=0;
					break;
				}
			}
			if(z==1)
				a[i]++;
		}
	for(i=1,max=a[0];i<=n-m-1;i++)
		if(a[i]>max)
			max=a[i];
	if(max==1)
		my_printf("NO");
	else
	{
		my_printf("%d\n",max);
		for(i=0;i<=n-m-1;i++)
			if(a[i]==max)
			{
				for(j=0;j<m;j++)
					my_printf("%c",s[i][j]);
				my_printf("\n");
			}
	}

}


