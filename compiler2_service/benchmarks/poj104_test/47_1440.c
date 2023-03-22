#define NUM_ITER 42625

#include <header.h>

int main_bench(){
	int SZ[100],ZS[100];
	int n,m=0,i;
	my_scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		my_scanf("%d ",&(SZ[i]));
	}
	my_scanf("%d",&(SZ[n-1]));
	while(n>0){
		ZS[m]=SZ[n-1];
		n--;
		m++;
	}
	for(i=0;i<m-1;i++)
		my_printf("%d ",ZS[i]);
	my_printf("%d",ZS[m-1]);
	return 0;
}