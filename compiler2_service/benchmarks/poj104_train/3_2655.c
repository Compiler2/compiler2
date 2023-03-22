#define NUM_ITER 52429

#include <header.h>

int main_bench(){
	int a[1000],n,k,i,j;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=n-1;j>=0;j--){
			if((a[i]+a[j]==k)&&(i!=j))break;
		}
		if((a[i]+a[j]==k)&&(i!=j))break;
	}
	if((a[i]+a[j]==k)&&(i!=j))
	my_printf("yes");
	else my_printf("no");
	return 0;
}
