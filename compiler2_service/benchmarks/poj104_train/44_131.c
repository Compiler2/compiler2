#define NUM_ITER 419567

#include <header.h>


int main_bench()
{
	int reverse (int n);
	int s[6]={0},z[6]={0},i;
    for (i=0;i<6;i++)
	{
		my_scanf("%d",&s[i]);
		z[i]=reverse (s[i]);
	    my_printf("%d\n",z[i]);
	}
return 0;
}
int reverse (int n)
{
	int z,t=0;
	if (n==0)
		z=0; 
	while(n!=0)
	{
        t=t*10+n%10;
        n=n/10;
	}
    if (n<0)
	{
		z=t*(-1);
	}else{
		z=t;
	}
		return z;
}