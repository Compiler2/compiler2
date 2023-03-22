#define NUM_ITER 1348015

#include <header.h>

int main_bench()
{
	int n,i,s=0,a,b;
	my_scanf("%d",&n);
    if(n%10==0) 
       {
       	if(n==0) my_printf("");
        else
        {my_printf("0");
	for(n=n/10;n%10==0;n=n/10)
	   {my_printf("0");}
	for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	}
}
	else
		for(;n>=1;n=n/10)
	{
	i=n%10;
	s=s*10+i;
	}
	my_printf("%d",s);
return 0;
}