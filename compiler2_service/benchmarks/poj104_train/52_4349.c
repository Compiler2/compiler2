#define NUM_ITER 2547

#include <header.h>

void swap(int a[],int n,int m)
{
	int temp;
    temp=a[m];
	a[m]=a[n];
	a[n]=temp;
}
void circle(int a[],int l)
{
	int i;
	for(i=0;i<l;i++)
		swap(a,0,i);
}
int main_bench()
{
	int l,k,i;
	int a[100];
	my_scanf("%d %d",&l,&k);
	for(i=0;i<l;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<k;i++)
		circle(a,l);
	for(i=0;i<l-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d\n",a[i]);
}