#include <header.h>

int main_bench(){
	int a[1000],n,k,i,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<=n-1;i++)
		my_scanf("%d",&a[i]);
	for(i=0;i<n-1;i++){
		for(j=1+i;j<=n-1;j++){
				if(a[i]+a[j]==k){
					my_printf("yes");
					return 0;}
		if(i==n-2&&j==n-1){
		my_printf("no");
		return 0;}}}

	}
