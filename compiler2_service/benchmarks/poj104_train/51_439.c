#include <header.h>

int main_bench()
{
	int i,k[600]={0},j,l,n,m,d[600]={0},dmax=0;
	char a[600][7],c[600];
    my_scanf("%d",&n);
	my_scanf("%s",c);
	m=strlen(c);
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<n;j++)
		{a[i][j]=c[i+j];}
		a[i][n]='\0';
	}
    for(i=0;i<m-n;i++)
    {for(j=i+1;j<=m-n;j++)
	 if(strcmp(a[i],a[j])==0)
		 d[i]++;
	}
	for(i=0;i<=m-n;i++)
		for(j=0;j<=m-n;j++)
			if(d[i]>=d[j])k[i]++;
    for(i=0;i<=m-n;i++)
	{
		if(k[i]==m-n+1)
		break;
	}
	if(d[i]==0)my_printf("NO");
	else
	{
		my_printf("%d\n",d[i]+1);
		for(i=0;i<=m-n;i++)
			if(k[i]==m-n+1)
				my_printf("%s\n",a[i]);
	
	
	}





}