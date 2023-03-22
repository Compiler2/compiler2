#define NUM_ITER 57732

#include <header.h>

int main_bench()
{
	int a[100];
	int n,first=0,second=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if(first<a[i]){
			first=a[i];
		}
		else
		{
			first=first;
		}
	}
	for(i=0;i<n;i++){
		if(second<a[i]&&a[i]!=first){
			second=a[i];
		}
		else
		{
			second=second;
		}
	}
	my_printf("%d\n",first);
	my_printf("%d\n",second);
	return 0;
}
