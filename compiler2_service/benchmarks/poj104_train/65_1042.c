#define NUM_ITER 35137

#include <header.h>

int main_bench(){
	int n,a,b,i,c,d;
	a=0;
	b=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&c,&d);
		if(c==0&&d==1)
			a++;
		else if(c==1&&d==2)
			a++;
		else if(c==2&&d==0)
			a++;
		else if(c==1&&d==0)
			b++;
		else if(c==2&&d==1)
			b++;
		else if(c==0&&d==2)
			b++;
	}
	if(a>b)
		my_printf("A");
	else if(b>a)
		my_printf("B");
	else 
		my_printf("Tie");


	return 0;
}