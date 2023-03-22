#define NUM_ITER 5939

#include <header.h>

int main_bench()
{
	int a[10000]={0};
	int n,c,i=0,j=0;
	my_scanf("%d",&n);
	my_scanf("%d",&c);
	a[0]=c;	
	my_printf("%d",a[0]);
	for(i=1;i<=n-1;i++){
		my_scanf("%d ",&c);
		a[i]=c;
		for(j=0;j<=i-1;j++){
			if(c==a[j]) a[i]=0;}
			if(a[i]!=0) my_printf(" %d",a[i]);
	}
	return 0;
}