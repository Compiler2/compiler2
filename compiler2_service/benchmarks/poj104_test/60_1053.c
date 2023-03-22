#include <header.h>



int main_bench()
{
	int i,j,n,a[100001],x=0,k=1;
	my_scanf("%d",&n);
	for(i=2;i<=n;i++){
		x=0;
		for(j=2;j<=i-1;j++){
			if(i%j==0){
				x=1;
			}
		}
		if(x==0){
			a[k]=i;
			k++;
		}
	}
	x=0;
	for(i=1;i<=k-2;i++){
		if(a[i+1]==a[i]+2){
			my_printf("%d %d\n",a[i],a[i+1]);
			x=1;
		}
	}
	if(x==0){
		my_printf("empty");
	}
	return 0;
}
