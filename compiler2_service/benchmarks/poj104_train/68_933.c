#define NUM_ITER 74527

#include <header.h>

int check(int n){
	int i;
	for(i=3;i*i<=n;i=i+2){
		if(n%i==0)break;
	}
	if(i*i>n)return 1;
	else return 0;
}

int main_bench(){
	int n,i,j;
	my_scanf("%d",&n);
	for(i=6;i<=n;i=i+2){
		for(j=3;j<=i/2;j=j+2){
			if(check(j)!=0&&check(i-j)!=0){
				my_printf("%d=%d+%d\n",i,j,i-j);
				break;
			}
		}
	}
	return 0;
}