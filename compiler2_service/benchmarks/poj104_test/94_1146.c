#define NUM_ITER 25801

#include <header.h>


int main_bench()
{
	int n,i,x,t=0;
	int a[1000]={0};
	my_scanf("%d",&n);
	for(i=1;i<=n;i++)
	   {my_scanf("%d",&x);
	    a[x]++;
	   }
	for(i=1;i<=1000;i++)
		if(a[i]!=0&&i%2!=0&&t==0){t++;my_printf("%d",i);}
		else if(a[i]!=0&&i%2!=0)my_printf(",%d",i);
	
	
    return 0;
}
