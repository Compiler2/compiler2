#define NUM_ITER 791188

#include <header.h>


int main_bench()
{
	int i,j,w,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},n;
	my_scanf("%d",&w);
	n=(w+12)%7;
	if(n==5){
		my_printf("%d\n",1);
	}
	for(i=1;i<=11;i++){
		n=(n+a[i])%7;
		if(n==5){
			my_printf("%d\n",i+1);
		}
	}
	return 0;
}
