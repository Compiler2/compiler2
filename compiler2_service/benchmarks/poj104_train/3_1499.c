#define NUM_ITER 3123

#include <header.h>

int main_bench()
{
	int n,i,k,j,e,p;
	int m=0;
	int a[1000];
	int b[499500];
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<=n;j++){
		b[m]=a[i]+a[j];
		m++;
		e=m;	
		}
	}
	p=0;
	for(m=0;m<e;m++){
		if(b[m]==k){
			p++;
		}
	}
	if(p==0){
		my_printf("no");
	}else{
		my_printf("yes");
	}

	return 0;
}