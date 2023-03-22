#define NUM_ITER 54376

#include <header.h>

int main_bench()
{
	int n,k,i,m,e;
	int p[1000];
	my_scanf("%d%d\n",&n,&k);
	e=n;
	for(i=1;i<=n;i++){
		my_scanf("%d",&p[i]);
	}
	for(m=1;m<=n-1;m++){
		for(i=m+1;i<=n;i++){
			if(p[m]+p[i]==k){
				my_printf("yes");
				e=i;
				break;
			}else if(m==n-1&&i==n){
				my_printf("no");
				e=i;
				break;
		}
		}
		if(e!=n||(m==n-1&&e==n)){
			break;
		}
	}
	return 0;
}
