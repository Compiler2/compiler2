#define NUM_ITER 20564

#include <header.h>




int main_bench(){
	int a[100000]={0},n,k,x,i;
	int ifind=0;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&x);
		if(x>k)
			continue;
		if(a[x]==1){
			ifind=1;
			break;
		}
		a[k-x]=1;
	}
	if(ifind)
		my_printf("yes");
	else
		my_printf("no");
	return 0;
}
