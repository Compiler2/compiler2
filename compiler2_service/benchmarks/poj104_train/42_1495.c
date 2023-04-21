#define NUM_ITER 55985

#include <header.h>

int main_bench()
{
	int b,i,c,d,n,e,j,k,m,a[1000000];
	my_scanf("%d",&n);

	for(i=1;i<=n;i++){
		my_scanf("%d",&a[i]);
	}
	my_scanf("%d",&b);
	for(k=1;k<=n;k++){
		if(a[k]!=b){
				my_printf("%d",a[k]);
		break;
		}
	}

	for(j=k+1;j<=n;j++){
			if(a[j]!=b)my_printf(" %d",a[j]);
	}

	return 0;
}
