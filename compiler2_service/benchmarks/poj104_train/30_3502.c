#define NUM_ITER 81092

#include <header.h>

int main_bench(){
	int n;
	int i=1;
	int s=0;
	my_scanf("%d",&n);
	while(i<=n){
		if(i%7!=0){
			if(i!=7){
				if((int)(i/10)!=7){
					if(i%10!=7){
						s+=i*i;
					}
				}
			}
		}
		i++;
	}
	my_printf("%d",s);
	return 0;
}