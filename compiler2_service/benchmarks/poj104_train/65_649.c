#define NUM_ITER 29423

#include <header.h>

int main_bench(){
	int a;
	int b;
	int n;
	int i;
	a=0;
	b=0;
	int zzd[202];
	int hzy[202];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&zzd[i]);
		my_scanf("%d",&hzy[i]);
	}
	for(i=0;i<n;i++){
		if(zzd[i]==0&&hzy[i]==1){
			a++;
		}
		if(zzd[i]==0&&hzy[i]==0){
			a=a;
		}
		if(zzd[i]==0&&hzy[i]==2){
			b++;
		}
		if(zzd[i]==1&&hzy[i]==1){
			a=a;
		}
		if(zzd[i]==1&&hzy[i]==0){
			b++;
		}
		if(zzd[i]==1&&hzy[i]==2){
			a++;
		}
		if(zzd[i]==2&&hzy[i]==0){
		    a++;
		}
		if(zzd[i]==2&&hzy[i]==1){
			b++;
		}
		if(zzd[i]==2&&hzy[i]==2){
			a=a;
		}
	}
	if(a>b){
	my_printf("A");
	}
	else if(a<b){
	my_printf("B");
	}
	else if(a=b){
	my_printf("Tie");
	}
	return 0;
}
		