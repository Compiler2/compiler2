#define NUM_ITER 105161

#include <header.h>

int main_bench()
{
    int n,i,a,b,c;
    int he;
    
    my_scanf("%d",&n);
    
    he=0;
    for(i=1;i<=n;i++)
    {
    	a=i/10;
    	b=i-a*10;
    	c=i-(i/7)*7;
    	if((a!=7)&&(b!=7)&&(c!=0))
    	he=he+i*i;
    }
    
    my_printf("%d",he);
}