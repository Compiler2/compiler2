#define NUM_ITER 692

#include <header.h>

int main_bench(){
	int n,i,m,a=0,t;
	my_scanf("%d",&n);
	for (i=1;i<=n*n;i++)

	{my_scanf("%d",&m);
	if (m==0)
		a=a+1;
	}
	
	t=(a+4)/4;
	my_printf("%d",(t-2)*(t-2));
	return 0;
}