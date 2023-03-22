#define NUM_ITER 3784

#include <header.h>

int main_bench()
{
	int n;
	int i,j;
	int a=0,b=0,c=0;
	my_scanf("%d",&n);
	for(i=2;i<n-1;i++){
		a=0;
		b=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				a=1;
			}
		}
		if(a==1){
			continue;
		}
		if(a==0){
			for(j=2;j<i+2;j++){
				if((i+2)%j==0){
					b=1;
				}
			}
		}
		if(a==0&&b==0){
			my_printf("%d %d\n",i,i+2);
			c=1;
		}
	}
	if(c==0){
		my_printf("empty");
	}
	return 0;
}
