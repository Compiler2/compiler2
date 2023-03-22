#define NUM_ITER 80136

#include <header.h>

int main_bench()
{ 
	int i,a,sum=0;
	my_scanf("%d",&a);
	for(i=a;i>=0;i--){
		if(i%7!=0&&(i-7)%10!=0&&(int)(i/10)!=7)
	sum+=i*i;
	}
	my_printf("%d",sum);
	return 0;
}
