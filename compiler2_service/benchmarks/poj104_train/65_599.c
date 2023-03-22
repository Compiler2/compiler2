#define NUM_ITER 36616

#include <header.h>

int main_bench()
{
	int n,i=0,a,b,c,j=0,k=0;
	my_scanf("%d",&n);
	while(i<n){
		my_scanf("%d%d",&a,&b);
		c=a-b;
		if(c==-1||c==2){
			j++;
		}else if(c==1||c==-2){
			k++;
		}
		i++;
	}
	if(j>k){
		my_printf("A");
	}else if(j<k){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}