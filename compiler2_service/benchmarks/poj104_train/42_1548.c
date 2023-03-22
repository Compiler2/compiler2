#define NUM_ITER 41412

#include <header.h>

int main_bench(){
	int n,a,u[1000000],b,c;
	b=0;
	c=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d ",&u[i]);
		}
		my_scanf("%d",&a);
		for(int i=0;i<n;i++){
			if(u[i]!=a){
				b=b+1;}}
		for(int i=0;i<n;i++){
			if(u[i]!=a){
				c=c+1;
				if(c<b){my_printf("%d ",u[i]);}
				else if(c==b){my_printf("%d",u[i]);}}}
				my_scanf("%d",&n);
	return 0;
	}
