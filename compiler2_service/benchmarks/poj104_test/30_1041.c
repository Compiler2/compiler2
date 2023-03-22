#define NUM_ITER 79391

#include <header.h>

int main_bench()
{
    int n,i,m;
	m=0;
    my_scanf("%d",&n);
    for(i=n;i>0;i--)
{
    if(i/10!=7)
		if(i-(i/10)*10!=7)
			if(i%7!=0)
               m=m+i*i;
}
    my_printf("%d",m);
    return 0;
}
	