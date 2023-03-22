#define NUM_ITER 677719

#include <header.h>

int main_bench(){
	char a[5];
	int i;
	for(i=0;i<=5;i++)
	{
		my_scanf("%c",&a[i]);
		if((int)(a[i])==10)
			break;
	}
	for(;i>=1;i--)
	{
		my_printf("%c",a[i-1]);
	}	
}