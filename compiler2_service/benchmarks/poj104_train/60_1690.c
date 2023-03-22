#define NUM_ITER 18918

#include <header.h>

int main_bench()
{
	int su[10000],i,j=0,k=0,n,t=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=2;j<=i;j++){
			if(i!=j&&i%j==0) break;
			if(i==j){
				su[k]=i;
				k++;
			}
		}
	}
	for(i=0;i<k-1;i++){
		if(su[i+1]-su[i]==2){
			my_printf("%d %d\n",su[i],su[i+1]);t=1;
		}
	}
	if(t==0) my_printf("empty");

	return 0;
}

