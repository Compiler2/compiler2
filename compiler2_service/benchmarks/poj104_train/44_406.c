#define NUM_ITER 399461

#include <header.h>

int reverse(int u){
	int a[33]={0};
	int j,k;
	int x=0;
	for(j=0;u>0;j++){
		a[j]=u%10; 

		u=u/10;
	}
	for(k=0;k<j;k++){

		x=x*10+a[k];
	}
	return x;
}


int main_bench(){
	int n,b;
	int i;
	for(i=0;i<6;i++){
		my_scanf("%d",&n);
		if(i!=0){
			my_printf("\n");
		}
		if(n<0){
			my_printf("-");
			n=-n;
		}
		b=reverse(n);
		my_printf("%d",b);
	}
	return 0;
}
