#include <header.h>

int main_bench(){
	int max=0,mbx=0,i,x;
	my_scanf("%d\n",&i);
	while(i>=0){
		my_scanf("%d\n",&x);
		i--;
		if(i>=0){
			if(max>x&&mbx<x)mbx=x;
			else if(mbx>x)
				;
			else if(max<x){
				mbx=max;
				max=x;
			}
		}
	}
		my_printf("%d\n%d\n",max,mbx);
	return 0;
}