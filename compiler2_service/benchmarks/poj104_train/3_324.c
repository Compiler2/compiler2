#define NUM_ITER 54092

#include <header.h>

int main_bench()
{
    int a[1000],n,k,i=0,j=0;
    my_scanf("%d",&n);
	my_scanf("%d",&k);
	for(i=0;i<=n;i++)
	my_scanf("%d",&a[i]);
	for(i=0;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(a[i]+a[j]==k){
				my_printf("yes");
				return 0;
			}
		}
	}
    my_printf("no");
	return 0;
}
