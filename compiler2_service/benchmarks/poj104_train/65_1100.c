#define NUM_ITER 40025

#include <header.h>

int main_bench(){


	int n,i=0,a=0,b=0,c,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&c,&d);
		if((c==0&&d==1)||(c==1&&d==2)||(c==2&&d==0))
			a++;
		else if(c==d){
			b++;
			a++;
		}
		else{
			b++;
		}
	}
	if(a==b)
		my_printf("Tie");
	else if(a>b)
		my_printf("A");
	else{
		my_printf("B");
	}


	

	

	return 0;
}
