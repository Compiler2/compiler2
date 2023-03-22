#include <header.h>

int main_bench()
{
	int n,l,i,j,k,max=0;
	int sum[1000]={0},c[1000]={0};
	char a[1000];
	char b[1000][10];
	for(i=0;i<1000;i++)
		for(j=0;j<10;j++)
			b[i][j]='\0';
	my_scanf("%d\n",&n);
	gets(a);
	l=strlen(a);
	for(i=0;i<l-n+2;i++)
		for(j=0;j<n;j++)
			b[i][j]=a[i+j];
	for(i=0;i<l-n+2;i++)
	{
		for(j=0;j<l-n+2;j++)
		{
			if(strcmp(b[i],b[j])==0)
			 sum[i]=sum[i]+1;
		}
	}
	for(i=0;i<l-n+2;i++)
	{
		if(sum[i]>max)
			max=sum[i];
	}
	if(max==1)
		{
			my_printf("NO");
		}
	else
	{
		my_printf("%d\n",max);
	for(i=0;i<l-n+2;i++)
    {
		if(max==1)
		{
			my_printf("NO");
			break;
		}
		if(sum[i]==max&&c[i]==0)
		{
			my_printf("%s\n",b[i]);
			for(k=i;k<l-n+2;k++)
			{
				if(strcmp(b[k],b[i])==0)
					c[k]=1;
			}
		}
	}
	}
}







