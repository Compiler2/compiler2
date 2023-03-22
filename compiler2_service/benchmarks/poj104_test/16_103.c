#define NUM_ITER 1403170

#include <header.h>


int main_bench()
{
	int n,i,w,c;
	my_scanf("%d",&n);
	if (n>9999)
		my_printf("00001");
	else if (n>999)
		w=4;
	else if (n>99)
		w=3;
	else if (n>9)
		w=2;
	else my_printf("%d",n);

	for(i=1;i<w+1;i++)
	{   
		c=n%10;
		n=n/10;
		
		my_printf("%d",c);
	}


return 0;
}
