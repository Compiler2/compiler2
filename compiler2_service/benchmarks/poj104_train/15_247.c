#define NUM_ITER 678

#include <header.h>

int main_bench()
{
	int n,i,x,number_0=0,s;
	my_scanf("%d",&n);
	for(i=0;i<n*n;i++)
	{	
		my_scanf("%d",&x);
		if(x==0){
			number_0++;
                          }

        }
    s=(number_0/4-1)*(number_0/4-1);
	my_printf("%d\n",s);
	return 0;
}