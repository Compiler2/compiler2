#define NUM_ITER 10267

#include <header.h>

int main_bench()
{
	int n,i,j,k,t;
	int a[20000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(j=1;j<n;j++){
		for(k=0;k<j;k++){
			if(a[j]==a[k])
				a[j]=0;
		}
		if(a[j])
			my_printf(" %d",a[j]);
	}
	return 0;
}
