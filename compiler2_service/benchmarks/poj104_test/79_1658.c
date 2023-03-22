#define NUM_ITER 23895

#include <header.h>

int main_bench()
{
	for (int j=0;;j++){
	int m,n;
	my_scanf("%d%d",&n,&m);
	if(m==0) break;else{	
	int k=0;
	for (int i=2;i<=n;i++)
		k=((m%i)+k)%i;
	my_printf("%d\n",k+1);
	}
}
}
 