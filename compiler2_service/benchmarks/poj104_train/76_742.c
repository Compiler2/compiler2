#define NUM_ITER 12087

#include <header.h>

int main_bench(){
	int a[10010]={0};
	int n,i,j,le,ri,st,en,bo=1;
	my_scanf("%d",&n);
	my_scanf("%d %d",&le,&ri);
	for(i=le;i<ri;i++){
		a[i]=1;
	}
	for(i=1;i<=n-1;i++){ 
			my_scanf("%d %d",&st,&en);
		if(st<le){
			le=st;
		}
		if(en>ri){
			ri=en;
		}
		for(j=st;j<en;j++){
	         	a[j]=1;
			}
		}
	for(i=le;i<ri;i++){
		if(a[i]==0){
			bo=0;
			break;
		}
	}
	if(bo==0){
		my_printf("no");
	}else{
		my_printf("%d %d",le,ri);
	}
	return 0;
}