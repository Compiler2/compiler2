#define NUM_ITER 1590958

#include <header.h>


int common(int a,int b);
int main_bench()
{
    int x,y;
	my_scanf("%d %d",&x,&y);
	my_printf("%d",common(x,y));
}
int common(int a,int b)
{
	if(a==b) return a;
	if(a>b) return common(a/2,b);
	return common(a,b/2);
}