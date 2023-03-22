#define NUM_ITER 35134

#include <header.h>

int main_bench()
{
	int a[201],b[201],n,i,na,nb;
	na=0;
	nb=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0)){
			na++;
		}else if(a[i]==b[i]){
			continue;
		}
		else{
			nb++;
		}
	}
	if(na>nb){
		my_printf("A");
	}else if(na<nb){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
return 0;
}