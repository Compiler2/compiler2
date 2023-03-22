#define NUM_ITER 71743

#include <header.h>


int main_bench(){
	int n;
	int sum,i,a,b;
	my_scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++){
		a=i/10;
		b=i%10;
		if(i%7==0 || a==7 || b==7)
			continue;
		sum=sum+i*i;
	}
	my_printf("%d\n",sum);
}

