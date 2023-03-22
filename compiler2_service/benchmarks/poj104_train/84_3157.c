#define NUM_ITER 57162

#include <header.h>

void operate(int a[],int n)
{	int i,pointer=0,max=a[0];
	for(i=0;i<n;i++)
	 if(a[i]>max) {pointer=i;max=a[i];}
	a[pointer]=0;
	my_printf("%d\n",max);
}
int main_bench()
{	int i,n,a[101];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);
	operate(a,n);
	operate(a,n);
}