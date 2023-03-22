#include <header.h>

int main_bench()
{
	int n,i,a,b,x,y;
	y=0;
	x=0;
	i=1;
	my_scanf("%d",&n);
	while(i<=n){
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			x=x+1;
			i=i+1;
		}else{
			if(y<x){
				y=x;
				x=0;
				i=i+1;
			}else{
				x=0;
				i=i+1;
			}
		}
	}
		    	if(y<x){
				y=x;
				my_printf("%d",y);
				}else{
			     my_printf("%d",y);
				}



 	return 0;
}

