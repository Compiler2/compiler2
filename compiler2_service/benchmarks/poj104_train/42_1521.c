#include <header.h>

int main_bench()
{
	int i,n,j,t[100000],a,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&t[i]);
	}
	my_scanf("%d",&k);
	for(i=0;i<n;i++){
		if(t[i]!=k){
			a=i;
			my_printf("%d",t[i]);
			break;
		}
	}
	for(i=a+1;i<n;i++){
		if(t[i]!=k){
			my_printf(" %d",t[i]);
		}
		
	}
	
	return 0;
}