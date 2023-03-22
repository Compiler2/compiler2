#define NUM_ITER 1641470

#include <header.h>

int main_bench()
{
	int a,b;
	void search(int,int);
	my_scanf("%d %d",&a,&b);
	search(a,b);
}
void search(int a,int b)
{
	if(a==b) my_printf("%d",a);
	else if(a>b)  search(a/2,b);
	else search(a,b/2);
}