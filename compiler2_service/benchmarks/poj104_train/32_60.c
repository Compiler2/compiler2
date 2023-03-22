#define NUM_ITER 10848

#include <header.h>

int main_bench()
{
	int i,n,j,x,y,k;
	char a[101],b[101],c[101],d[101],e[101];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		my_scanf("%s",a);
		my_scanf("%s",b);
		x=strlen(a);
		y=strlen(b);
		for(j=x-1,k=0;j>=0;j--,k++)
			c[k]=a[j];
		for(j=y-1,k=0;j>=0;k++,j--)
			d[k]=b[j];
		for(j=0;j<x;j++)
		{
			if(j<y)
			{
				if(c[j]<d[j]) {e[j]=c[j]+58-d[j];c[j+1]=c[j+1]-1;}
			    else e[j]=c[j]-d[j]+48;
			}
			else e[j]=c[j];
		}
		for(j=x-1;j>=0;j--) my_printf("%c",e[j]);
		my_printf("\n");
	}
	return 0;
}