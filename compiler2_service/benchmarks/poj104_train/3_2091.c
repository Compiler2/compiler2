#define NUM_ITER 54676

#include <header.h>

int main_bench()
{
	int n,i,h,b,c,j,k;
	int a[1000];
	b=0;
	my_scanf("%d%d",&n,&h);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a[i]);
	}
	for(j=1;j<=n;j++){
		for(k=j+1;k<=n;k++){
			if(a[j]+a[k]==h){
				my_printf("yes");
				b=1;
				goto A;
			}
		}
	}
	A:
	if(b==0)my_printf("no");		
	return 0;
}