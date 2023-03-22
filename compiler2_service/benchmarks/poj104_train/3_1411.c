#define NUM_ITER 49825

#include <header.h>

int main_bench()
{
    int n,k;
	int a[1000];
	
	
	my_scanf("%d %d",&n,&k);
	for(int j=0;j<n;j++)
	{  my_scanf("%d",&a[j]);
	}

	for(int e=0;e<=n;e++){
		for(int i=e+1;i<n;i++){
			if(a[e]+a[i]==k){
			my_printf("yes");
			e=n+1;
			i=n;}
			}
		if(e==n){	
			my_printf("no");}	
	}
	

	return 0;





}