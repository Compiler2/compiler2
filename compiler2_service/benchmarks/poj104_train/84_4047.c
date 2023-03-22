#define NUM_ITER 65471

#include <header.h>


int main_bench()
{
	int n,a;
	int i=0;
	int x=0;
	int y=0;
	my_scanf("%d",&n);
	do{
		my_scanf("%d",&a);
		if (a>x){
			y=x;
			x=a;
		}
		else if(a>y){
			y=a;
		}
		i++;
	}while(i<n);
	my_printf("%d\n%d\n",x,y);
	
	
	return 0;
}
	