#include <header.h>

float yzs(int n)
{
	int i;
	float b[100];
	float f[100],result=0;
	
	b[0]=1;
	b[1]=2;
	for(i=2;i<n+1;i++)
	{
		b[i]=b[i-1]+b[i-2];
	}
	
	for(i=0;i<n;i++)
	{
		f[i]=b[i+1]/b[i];
		result+=f[i];
	}
	return result;
}
int main_bench()
{
	int n;
	int a,i;
    int sz[100];
    my_scanf("%d",&a);
	for (i=0;i<a;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<a;i++)
	{
		my_printf("%.3f\n",yzs(sz[i]));
	}
	return 0;
}

