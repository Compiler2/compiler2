#define NUM_ITER 52734

#include <header.h>

int main_bench()
{
    int n,i,k,shuzu[1000],j,x=0;
    my_scanf("%d%d",&n,&k);
    for(i=0;i<n;i++){
		my_scanf("%d",&shuzu[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){ 
			if(shuzu[i]+shuzu[j]==k) {
				my_printf("yes");
				j=n+1;
				i=n+1;
			}
			else{
				x++;
			}
		}
	}
	if(x==((n-1)*n/2)){
		my_printf("no");
	}
    return 0;
}