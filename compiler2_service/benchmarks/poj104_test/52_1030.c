#define NUM_ITER 44434

#include <header.h>

int main_bench()
{
	int num1[100],num2[100]={0},a[100];
	int n,m,i,j;
	my_scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d ",&num1[i]);
         	for(i=0;i<n-m;i++)
	 num2[i+m]=num1[i];
	for(i=0;i<m;i++)
	 num2[i]=num1[n-m+i];
	for(i=0;i<n-1;i++)
	 my_printf("%d ",num2[i]);
	my_printf("%d",num2[n-1]);
}
