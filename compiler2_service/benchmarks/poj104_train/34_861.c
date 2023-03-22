#define NUM_ITER 313070

#include <header.h>

int isjishu(int x);
int isoushu(int y);
int main_bench()
{
	int n;

	my_scanf("%d",&n);
	for(;;)
	{
		if(n==1) break;
		if(n%2==0) n=isoushu(n);
		else n=isjishu(n);
		
	}
	my_printf("End");
	return 0;
}


int isjishu(int x)
{
	int temp1=x;
	x=x*3+1;
	my_printf("%d*3+1=%d\n",temp1,x);
	return x;
}
int isoushu(int y)
{
	int temp2=y;
	y=y/2;
	my_printf("%d/2=%d\n",temp2,y);
	return y;
}
