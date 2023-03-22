#define NUM_ITER 63907

#include <header.h>

int main_bench()
{
	int j,n,s=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n;i++){
		if(i%7==0){
			continue;
		}
		if(i%10==7){
			continue;
		}
		j=i;
		j=j/10;
		if(j%10==7){
			continue;
		}
		s+=i*i;

	}
	my_printf("%d",s);
	return 0;
}