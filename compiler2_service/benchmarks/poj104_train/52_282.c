#define NUM_ITER 51723

#include <header.h>


int main_bench()
{
    int *dt;
	int n,m;
	int j,i;
	my_scanf("%d%d",&n,&m);
	dt=(int *)malloc(sizeof(int)*n);
	for(i=0;i<(n-m);i++)
	{*(dt+i+m)=0;
		my_scanf("%d",&j);
	*(dt+i+m)=j;}
	for(i=(n-m);i<n;i++)
	{*(dt+i-n+m)=0;
		my_scanf("%d",&j);
	*(dt+i-n+m)=j;}
	my_printf("%d",dt[0]);
	for(i=1;i<n;i++)
	{my_printf(" %d",dt[i]);}
    free(dt);

	return 0;
}
