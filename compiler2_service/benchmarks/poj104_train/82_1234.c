#define NUM_ITER 36492

#include <header.h>

int main_bench()
{
	int n,i,j,k[100]={0};
	int a[99][2];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0,j=0;i<n;i++)
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
			k[j]++;
		else
			j++;
	for(i=0,j=k[0];i<100;i++)
		if(k[i]>j)
			j=k[i];
	my_printf("%d\n",j);
	return 0;
}