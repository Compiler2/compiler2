#define NUM_ITER 54840

#include <header.h>


int main_bench()
{
	int n,k,t=0;
	my_scanf("%d %d",&n,&k);
	int a[1001];
	for(int i=1;i<=n;i++){
		my_scanf("%d",&a[i]);}
	for(int q=1;q<=n-1;q++){
		for(int r=q+1;r<=n;r++){
			if(a[q]+a[r]==k){
				my_printf("yes");
				t++;
				break;}
		}
		if(t==1){
			break;}
	}
	if(t==0){
		my_printf("no");}


	return 0;
}

