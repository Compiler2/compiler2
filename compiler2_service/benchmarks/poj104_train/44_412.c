#define NUM_ITER 401525

#include <header.h>




void reverse(int x,int k);
int main_bench()
{
	int i,n;
	for(i=0;i<6;i++){
		my_scanf("%d",&n);
		if(n<0)my_printf("-");
		reverse(n,0);
	}
	return 0;
}


void reverse(int x,int k){
	if(x<0)x=-x;
	if(x%10!=0)k++;
	if(x/10==0){
		my_printf("%d\n",x);
	}else{
		if(k!=0)my_printf("%d",x%10);
		reverse(x/10,k);
	}
	
}

