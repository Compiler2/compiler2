#define NUM_ITER 37542

#include <header.h>

int main_bench(){
	int a,b,i,n,m;
	int x[200];
	int y[200];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		my_scanf("%d%d",&(x[i]),&(y[i]));
	}
a=0;
b=0;
	for(i=0;i<=n-1;i++){
		m=x[i]-y[i];
		if(m==-1||m==2){
			a++;
		}
		if(m==1||m==-2){
			b++;}
	}
	if(a>b){
		my_printf("A");
	}
	if(a==b){
		my_printf("Tie");}
	if(a<b){
		my_printf("B");}
	return 0;
}