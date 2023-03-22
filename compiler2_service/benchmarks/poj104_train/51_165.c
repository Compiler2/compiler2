#include <header.h>

int main_bench()
{
	char a[500][5],x[500];
	int i,n,len,j,num[500],maxn=0,y=0;
	my_scanf("%d%s",&n,x);
	len=strlen(x);
	for(i=0;i<=len-n;i++)
	{
		for(j=0;j<n;j++)
		{
			a[i][j]=x[i+j];
		}
		a[i][n]='\0';
	}
	for(i=0;i<=len-n;i++)
	{
		num[i]=1;
		for(j=i+1;j<=len-n;j++)
		{
			if(strcmp(a[i],a[j])==0)
				num[i]++;
		}
	}
	for(i=0;i<=len-n;i++)
	{
		if(num[i]>maxn)
			maxn=num[i];
	}
	if(maxn==1)
		my_printf("NO\n");
	else
	{
		my_printf("%d\n",maxn);
		for(i=0;i<=len-n;i++)
		{
			if(num[i]==maxn)
				my_printf("%s\n",a[i]);
		}
	}
}

			


