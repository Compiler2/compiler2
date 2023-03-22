#define NUM_ITER 3937

#include <header.h>

int n,m,i;
int a[100];
int b[100];
void passed(int x,int y)
{
	int j,t;
	for(i=1;i<x;i++)
	{
		for(j=0;j<i;j++)
		{
			if(a[i-j]<a[i-1-j])
			{
				t=a[i-j];
				a[i-j]=a[i-1-j];
				a[i-1-j]=t;
			}
			else break;
		}
	}
	for(i=1;i<y;i++)
	{
		for(j=0;j<i;j++)
		{
			if(b[i-j]<b[i-1-j])
			{
				t=b[i-j];
				b[i-j]=b[i-1-j];
				b[i-1-j]=t;
			}
			else break;
		}
	}
	my_printf("%d",a[0]);
	for(i=1;i<x;i++) my_printf(" %d",a[i]);
	for(i=0;i<y;i++) my_printf(" %d",b[i]);
}
int main_bench()
{
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++) my_scanf("%d",&a[i]);
	for(i=0;i<m;i++) my_scanf("%d",&b[i]);
	passed(n,m);
} 