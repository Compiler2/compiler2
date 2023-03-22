#define NUM_ITER 1517002

#include <header.h>

int main_bench(){
	int a,b=3,c=5,d=7,x,y,z;
	my_scanf("%d",&a);
	 x=a%3,y=a%5,z=a%7;
	if(x==0 && y==0 && z==0)
		my_printf("%d %d %d",b,c,d);
	else if(x==0 && y==0 && z!=0)
		my_printf("%d %d",b,c);
	else if(x==0 && y!=0 && z==0)
		my_printf("%d %d",b,d);
	else if(x!=0 && y==0 && z==0)
		my_printf("%d %d",c,d);
	else if(x==0 && y!=0 && z!=0)
		my_printf("%d",b);
	else if(x!=0 && y==0&& z!=0)
		my_printf("%d",c);
	else if(x!=0 && y!=0&& z==0)
		my_printf("%d",d);
	else
	my_printf("n");
	return 0;
	}

	
