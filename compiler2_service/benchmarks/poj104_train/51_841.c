#define NUM_ITER 807158

#include <header.h>

int main_bench()
{
    int n,i,j,m,b[510],k=0,d=1;
	char a[510],c[510][6]={'\0'};
	my_scanf("%d\n",&n);
	gets(a);
    m=strlen(a);
	for(i=0;i<=m-n;i++)
	{
		for(j=0;j<=n-1;j++)
		{
			c[i+1][j]=a[i+j];
		}
	}
	for(i=1;i<=m-n+1;i++)
	{
		for(j=1,b[i]=0;j<=m-n+1;j++)
		{
			if (strcmp(c[i],c[j])==0)
				b[i]++;
		}       
		if (b[i]>k)
			k=b[i];
	}
	if (k==1)
		my_printf("NO");
	else
	{my_printf("%d\n",k);
	for(i=1;i<=m-n+1;i++)
	{
		if (b[i]==k)
		{
			for(j=1,d=1;j<=i-1;j++)
			{
				if (strcmp(c[j],c[i])==0)
				{
					d=0;
					break;
				}
			}
			if (d!=0)
                my_printf("%s\n",c[i]);
		}
	}
	}
	return 0;
}