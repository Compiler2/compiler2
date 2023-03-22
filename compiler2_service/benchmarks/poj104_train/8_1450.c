#define NUM_ITER 10928

#include <header.h>

int Compare(const void *elem1,const void *elem2)
{
	return *((int *)elem1)-*((int *)elem2);
}
int main_bench()
{
	int m,n;
	int a[100],b[100];
	int i;
	my_scanf("%d %d",&m,&n);
	for(i=0;i<m;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&b[i]);
	}
	qsort(a,m,sizeof(int),Compare);
	qsort(b,n,sizeof(int),Compare);
	for(i=0;i<m;i++)
	{
		my_printf("%d ",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%d ",b[i]);
	}
	my_printf("%d",b[n-1]);
}