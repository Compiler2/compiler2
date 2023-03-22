#include <header.h>

int main_bench()
{
	int n,m,i,j,c[500];
	char s[501],t[500][4];
	my_scanf("%d",&n);
	my_scanf("%s",s);
	m=strlen(s);
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
			t[i][j]=s[i+j];
	}
	for(i=0;i<=m-n;i++)
	{
		c[i]=1;
		for(j=i+1;j<=m-n;j++)
		{
			int u=0,w;
			for(w=0;w<n;w++)
			{
				if(t[i][w]==t[j][w])
					u=u+1;
			}
			if(u==n)
				c[i]=c[i]+1;
		}
	}
	int k=c[0];
	for(i=1;i<=m-n;i++)
	{
		if(c[i]>k)
			k=c[i];
	}
	if(k==1)
		my_printf("NO");
	else
	{
		my_printf("%d\n",k);
		for(i=0;i<=m-n;i++)
		{
			if(c[i]==k)
			{
				for(j=0;j<n;j++)
					my_printf("%c",t[i][j]);
				my_printf("\n");
			}
		}
	}
}
