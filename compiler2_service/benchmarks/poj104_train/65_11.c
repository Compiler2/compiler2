#define NUM_ITER 38583

#include <header.h>

int panduan(int a,int b){
	if(a==b)
		return 0;
	else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
		return 1;
	else
		return -1;
}
int main_bench(){
	int n,a,b,x=0;
	my_scanf("%d",&n);

	while(n--){
		my_scanf("%d%d",&a,&b);
		x+=panduan(a,b);
	}

	if(x>0)
		my_printf("A\n");
	else if(x==0)
		my_printf("Tie\n");
	else
		my_printf("B\n");
	
	return 0;
}