#define NUM_ITER 1277172

#include <header.h>


int main_bench()
{
	char man,a[200];
	int len,i,j,k,w[200],m[200],p=0;
	my_scanf("%s",a);
	len=strlen(a);
	man=a[0];
hell:;
	for(i=0;i<=len-1;i++)
	{
		if(a[i]==man)
		{
			for(j=i+1;j<=len-1;j++)
			{
				if(a[j]==man)
				{
					break;
				}
				if(a[j]!=man&&a[j]!=1)
				{
					a[i]=1;a[j]=1;
					m[++p]=i;w[p]=j;
					goto hell;
				}
			}
		}
	}
	for(k=1;k<=p;k++)
	{
		my_printf("%d %d\n",m[k],w[k]);
	}

}