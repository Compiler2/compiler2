#define NUM_ITER 56330

#include <header.h>

int main_bench()
{
	int n,k,i,j;
	my_scanf("%d %d",&n,&k);
	int a[1000];
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	int hh=0,b=0;
	for(i=0;i<n;i++){
		int count=0;
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){
				my_printf("yes");
				b=1;
				break;
			}
			else  count++;
		}
		if(b==1) break;
		if(count==n-1-i) hh++;
	}
	if(hh==n) my_printf("no");
	return 0;
}