#define NUM_ITER 3878

#include <header.h>



int main_bench()
{
	int n,i,count,x,sum;
	sum=0;
	my_scanf("%d",&n);
	for(i=3;i<=n-2;i++){
		for(x=2,count=0;x<i;x++){
			if(i%x!=0){count++;}
	}
		if(count==i-2){
	for(x=2,count=0;x<(i+2);x++){
			if((i+2)%x!=0){count++;}
	}
	if(count==i){
	my_printf("%d %d\n",i,i+2);
	sum++;}}}
	if(sum==0){
	my_printf("empty");}
	return 0;
}