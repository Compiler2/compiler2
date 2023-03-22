#define NUM_ITER 35976

#include <header.h>

int main_bench(){
	int n,a,b;
	int as=0,bs=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
			as++;
		else if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
			bs++;
	}
	if(as>bs)
		my_printf("A");
	else if(as<bs)
		my_printf("B");
	else
		my_printf("Tie");
	return 0;
}