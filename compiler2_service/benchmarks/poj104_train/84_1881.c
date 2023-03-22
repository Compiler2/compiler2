#define NUM_ITER 55035

#include <header.h>

int main_bench()
{
	int an[100];
	int a,b,M,m,n,i;
	my_scanf("%d",&n);
	my_scanf("%d\n%d",&a,&b);
	if(a>=b){
		M=a;
		m=b;
	}
	else{
		m=a;
		M=b;
	}
	for(i=2;i<n;i++){
		my_scanf("%d\n",&an[i]);
		if(an[i]>M){
			m=M;
			M=an[i];
		}
		else if(an[i]<M && an[i]>m){
			m=an[i];
		}
	}
	my_printf("%d\n%d",M,m);
	return 0;
}
