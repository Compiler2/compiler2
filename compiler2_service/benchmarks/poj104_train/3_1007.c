#define NUM_ITER 2924

#include <header.h>

int main_bench()
{
	int n,k,a[1000],i,j,e=0;
	my_scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)my_scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)continue;
			if(a[i]+a[j]==k){
			   e++;
			}
		}
	}
	if(e==0)my_printf("no");
	else if(e>0)my_printf("yes");
	return 0;
}