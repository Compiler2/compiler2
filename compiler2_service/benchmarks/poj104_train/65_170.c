#include <header.h>

int main_bench() {
	int n,i,a,b,r=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			r+=1;
		}else if(a==1&&b==2){
			r+=1;
		}else if(a==2&&b==0){
			r+=1;
		}else if(a==b){
			r=r;
		}else {
			r=r-1;
		}
	}
	if(r>0){
		my_printf("A");
	}else if(r<0){
		my_printf("B");
	}else {
		my_printf("Tie");
	}
	return 0;
}
