#include <header.h>

int main_bench()
{
	int*p,*point,*start,*begin,*temp,i,n,m;
	my_scanf("%d%d",&n,&m);
	p=(int*)malloc(sizeof(int)*n);
	point=p;
	start=p;
	begin=p;
	for(i=0;i<n;i++,start++)
	{
		my_scanf("%d",start);
	}
	point+=(n-m);
	temp=point;
	for(;point<start;point++)
	{
		my_printf("%d ",*point);
	}
	for(;begin<temp-1;begin++)
	{
		my_printf("%d ",*begin);
	}
	my_printf("%d",*begin);
	free(p);
	return 0;
}
