#include <header.h>


int main_bench()
{
    int x,y=0;
	my_scanf("%d",&x);	
	while(x>0){
		y=(y+x%10)*10;
		x=x/10;
	}
	y=y/10;
	my_printf("%d\n",y);
	return 0;
}
