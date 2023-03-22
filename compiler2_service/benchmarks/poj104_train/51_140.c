#include <header.h>

int main_bench()
{
	int n,i,j=0,s,t=0,m,q=0,d[250];char a[500],b[250][5];
	my_scanf("%d %s",&n,a);
	s=strlen(a);
    for(i=0;i<=s-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
		b[i][n]=0;
	}
	
	for(i=0;i<=s-n;i++)
	{
		m=0;
		for(j=i+1;j<=s-n;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				if(m==0)m=2;
			    else m=m+1;
			}
		}
		d[i]=m;
		if(d[i]>q)q=d[i];
	}
	if(q==0){my_printf("NO");}
	else 
	{
		my_printf("%d\n",q);
		for(i=0;i<=s-n;i++)
		{
			if(d[i]==q)my_printf("%s\n",b[i]);
		}
	}
}
	