#define NUM_ITER 1121013

#include <header.h>

int main_bench()
{
	int n,i,j,l,c[500],k;
	char a[1000],b[500][6];
	my_scanf("%d",&n);
	getchar();
	gets(a);
	l=strlen(a);
	for(i=0;i<l-n+1;i++)
	{
		for(j=i;j<i+n;j++)
		{
			b[i][j-i]=a[j];
		}
		b[i][n]='\0';
	}
	for(i=0;i<l-n+1;i++)
	{
		c[i]=1;
		for(j=i+1;j<l-n+1;j++)
		{
			if(strcmp(b[i],b[j])==0)
			{
				c[i]=c[i]+1;
			}
		}
	}
	k=0;
	for(i=0;i<l-n+1;i++)
	{
		if(c[i]>k)
		{
			k=c[i];
		}
	}
	if(k<=1)
	{
		my_printf("NO");
	}
	else{
	my_printf("%d\n",k);
    for(i=0;i<l-n+1;i++)
	{
		if(c[i]==k)
		{
			my_printf("%s\n",b[i]);
		}
	}}
	return 0;
}