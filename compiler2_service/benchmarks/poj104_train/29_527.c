#define NUM_ITER 5461

#include <header.h>

int main_bench()
{
 int sz[100],m,i,n,k;
 double r;
 r=0;
 sz[0]=1;
 sz[1]=2;
 for(i=2;i<100;i++)
 {
	sz[i]=sz[i-1]+sz[i-2];
 }
 my_scanf("%d",&m);
 for(k=0;k<m;k++)
 {
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
	   r+=sz[i+1]*1.00000/sz[i]*1.0000;
	}
    my_printf("%.3lf\n",r);
	r=0;
 }
	return 0;
}