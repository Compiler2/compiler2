#define NUM_ITER 20878

#include <header.h>


int min(int a[],int i)
{
	int m=a[0],j;
	for(j=0;j<i;j++)
		if(a[j]<m) m=a[j];
	return m;
}
int max(int a[],int i)
{
	int m=a[0],j;
	for(j=0;j<i;j++)
		if(a[j]>m) m=a[j];
	return m;
}

int main_bench()
{
	int a[2][1001]={0};
	int i,j,start,end,k,m,p=0;
	char c;
	for(i=0;;i++)
	{
		my_scanf("%d",&a[0][i]);
		my_scanf("%c",&c);
		if(c=='\n') break;
	}i=i+1;
	for(j=0;j<i;j++)
		my_scanf("%d%c",&a[1][j],&c);
	start=min(a[0],i);
	end=max(a[1],i);
	for(k=start;k<=end;k++)
	{
		m=0;
		for(j=0;j<i;j++)
		{
			if(k<a[1][j]&&k>=a[0][j]) m=m+1;
		}
		if(m>p) p=m;
	}
	my_printf("%d %d",i,p);
	return 0;
}