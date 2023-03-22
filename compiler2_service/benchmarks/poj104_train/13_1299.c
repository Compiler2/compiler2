#define NUM_ITER 3693

#include <header.h>

int hs(int a);
int main_bench(){
	int n,b[20002],i,j,pd,js;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&b[i]);
	}
	js=n;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			if(b[j]==b[i]){
				js--;
				break;
			}
		}
    }
    pd=1;
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			if(b[j]==b[i]){
				pd=0;
			}
		}
		if(pd==1&&js!=1){
			my_printf("%d ",b[i]);
			js--;
		}
		else if(pd==1&&js==1){
			my_printf("%d",b[i]);
			break;
		}
		pd=1;
	}
	my_scanf("%d",&n);
	return 0;
}
