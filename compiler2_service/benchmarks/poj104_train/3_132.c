#define NUM_ITER 7544

#include <header.h>

int main_bench()
{
	int n,i,j,k,s;
	int a[1000],flag=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=k-a[i];
		for(j=i+1;j<n;j++)
		{
			if(s==a[j]){
				flag=1;
				break;
			}
		}
	}
	if(flag){
		my_printf("yes\n");
	}
	else{
		my_printf("no\n");
	}
	return 0;
}
