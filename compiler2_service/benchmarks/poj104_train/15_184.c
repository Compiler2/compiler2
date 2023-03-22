#define NUM_ITER 682

#include <header.h>

int main_bench()
{
	int p;
	int i,n,tmp,squar;
	tmp=0;
	my_scanf("%d",&n);
	for(i=0;i<n*n;i++)
		{
			my_scanf("%d",&p);
			if(p==0)
				tmp=tmp+1;
			}
	tmp=tmp/4;
	squar=(tmp-1)*(tmp-1);
	my_printf("%d\n",squar);
}