#define NUM_ITER 38752

#include <header.h>

int max(int a,int b){
	
	if(a>=b)
			return a;
		else 
			return b;
	}
int min(int a,int b){
	if(a>=b){
		return b;
	}
	else return a;
}

int main_bench(){

	int i,c;
	int n;
	int a=0;
	int b=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&c);
		b=max(min(a,c),min(a,b));
		a=max(a,c);
	}
	my_printf("%d\n",a);
	my_printf("%d\n",b);

}
