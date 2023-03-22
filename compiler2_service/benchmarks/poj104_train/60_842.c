#define NUM_ITER 3636

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int z=0;
	for(int i=3;i<=n;i++){
		int x=0,y=0;
		for(int j=2;j<i;j++){
			if(i%j==0){
				x=x+1;
			}
		}
		if(x==0&&(i+2)<=n){
			for(int k=2;k<i+2;k++){
				if((i+2)%k==0){
					y=y+1;
				}
			}
			if(y==0){
				z=z+1;
				if(i==3){
					my_printf("%d %d",i,i+2);
				}
				else{
					my_printf("\n%d %d",i,i+2);
				}
			}
		}
	}
	if(z==0){
		my_printf("empty");
	}
	return 0;
}


