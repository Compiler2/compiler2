#define NUM_ITER 25901

#include <header.h>

int main_bench()
{
	char a[100],c[50][50],e[50];
	int i,j,k,l,b,d=0;
	for(i=0;;i++)
	{
		my_scanf("%c",&a[i]);
		if(a[i]=='\n')
			break;
	}
	for(j=0;j<i;j++)
	{
		for(k=j+1;k<=i;k++)
		{
			b=0;
			for(l=j;l<=k;l++)
			{
				if(a[l]!=a[k+j-l])
				{
					b=1;
					break;
				}
			}
			if(b==0)
			{
				for(b=j;b<=k;b++)
					c[d][b-j]=a[b];
			c[d][k-j+1]='\0';
			d++;
			}
		}
	}
	for(i=2;i<100;i++)
	{
		for(j=0;j<d;j++)
		{
			if(strlen(c[j])==i)
				my_printf("%s\n",c[j]);
		}
	}
	return 0;
}