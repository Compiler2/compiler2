#define NUM_ITER 2151

#include <header.h>

int main_bench()
{
	int m,n;
	void f1(int x),f2(int x);
	my_scanf("%d %d",&m,&n);
	f1(m);
	f2(n);
	return 0;
}
void f1(int x)
{
	int i,m,j=0,a[2][100];
	for(i=0;i<x;i++)
	my_scanf("%d",&a[0][i]);
	while(j<x)
	{
	m=a[0][0];
	for(i=0;i<x;i++)
	if(a[0][i]>m)
	m=a[0][i];
	for(i=0;i<x;i++)
	if(a[0][i]==m)
	{
		a[1][j]=m;
		j++;
		a[0][i]=-1;
	}
    }
    for(i=x-1;i>=0;i--)
    {
	if(i!=x-1) 

    my_printf(" %d",a[1][i]);
    else my_printf("%d",a[1][i]);
    }
}
void f2(int x)
{
	int i,m,j=0,a[2][100];
	for(i=0;i<x;i++)
	my_scanf("%d",&a[0][i]);
	while(j<x)
	{
	m=a[0][0];
	for(i=0;i<x;i++)
	if(a[0][i]>m)
	m=a[0][i];
	for(i=0;i<x;i++)
	if(a[0][i]==m)
	{
		a[1][j]=m;
		j++;
		a[0][i]=-1;
	}
    }
    for(i=x-1;i>=0;i--)
    my_printf(" %d",a[1][i]);

}