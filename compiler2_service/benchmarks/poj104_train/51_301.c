#define NUM_ITER 1080403

#include <header.h>

int main_bench(){
	char a[500];
	int n,max=0;
	my_scanf("%d",&n);
	my_scanf("%s",a);
	int i,j,k,l,x;
	l=strlen(a);
	int c[500];
	c[0]=1;
	for(i=1;i<=l-n;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i+k]!=a[j+k])
				{
					break;
				}
			}
			if(k==n) 
				{
					c[j]++;
					c[i]=0;
					break;
				}
		}
		if(j==i) c[i]=1;
	}
	for(i=0;i<=l-n;i++)
	{
		if(max<c[i]) 
		{
			max=c[i];
		}
	}
	if(max>1)
	{
	my_printf("%d\n",max);
	for(i=0;i<=l-n;i++)
	{
		if(c[i]==max)
		{
			for(j=i;j<i+n;j++)
			{
				my_printf("%c",a[j]);
			}
			my_printf("\n");
		}
	}
	}
	else my_printf("NO");
	my_scanf("\n");
}