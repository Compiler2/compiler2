#include <header.h>

int main_bench()
{
	int n,i=1,s[100],j;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d",&s[i]);
		i++;
	}
	j=n;
	while(j>1){
	     my_printf("%d ",s[j]);
		 j--;
	}
	my_printf("%d",s[1]);
	return 0;
}
