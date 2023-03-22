#include <header.h>

int main_bench()
{
	int n,s[100],sum;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	sum=n;
	for(int j=1;j<n;j++){
		my_printf("%d ",s[sum-j]);	
	}
	my_printf("%d",s[0]);
	return 0;
}