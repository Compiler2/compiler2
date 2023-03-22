#define NUM_ITER 7787

#include <header.h>

int main_bench(){
	int a[300];
	int i,j,n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if(i==0)
			my_printf("%d",a[i]);
		for(j=0;j<i;j++){
			if(a[i]==a[j])
				break;
			if(j==i-1)
				my_printf(",%d",a[i]);
		}
	}
	return 0;
}

