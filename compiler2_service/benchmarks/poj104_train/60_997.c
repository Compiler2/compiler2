#define NUM_ITER 2010

#include <header.h>


int f(int x){
	int i,num=0;
	for(i=1;i<=x;i++){
		if(x%i==0) num++;
	}
	if(num==2) return 1;
	else return 0;
}

int main_bench(){
	int i,n,e=2,num=0;
	my_scanf("%d",&n);
	for(i=2;i<=n;i++){
		if(f(i)&&i==e+2){
			my_printf("%d %d\n",e,i);
			num++;
		}
		if(f(i)) e=i;
	}
	if(num==0) my_printf("empty");
	return 0;
}