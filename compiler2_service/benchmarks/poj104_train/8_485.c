#define NUM_ITER 2716

#include <header.h>


void change(int *a,int n)
{int t,i,j;
	for(i=1;i<n;i++)
	for(j=0;j<i;j++)
	{if (a[i]<a[j])
		{t=a[j];
			a[j]=a[i];
			a[i]=t;}}}
void input(int *a, int n)
{int i;
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);}
void output(int *a,int n)
{int i;
	for(i=0;i<n;i++)
	my_printf("%d ",a[i]);}
int main_bench()
{int n,m,a[100],b[100];
	my_scanf("%d%d",&n,&m);
	input(a,n);input(b,m);
	change(a,n);change(b,m);
	output(a,n);output(b,m-1);my_printf("%d",b[m-1]);}

    
