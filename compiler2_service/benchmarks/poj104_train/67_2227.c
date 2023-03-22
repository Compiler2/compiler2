#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	int a,b;
	my_scanf("%d%d",&a,&b);
	double p,q;
	p=1.0*b/a;
	int i;
	for(i=1;i<=n-1;i++){
		int x,y;
		my_scanf("%d%d",&x,&y);
		q=1.0*y/x;
		if(i==n-1){
			if(q-p>0.05){
				my_printf("better");
			}else if(p-q>0.05){
				my_printf("worse");
			}else{
				my_printf("same");
			}
		}else{
			if(q-p>0.05){
				my_printf("better\n");
			}else if(p-q>0.05){
				my_printf("worse\n");
			}else{
				my_printf("same\n");
			}
		}
	}
	return 0;
}