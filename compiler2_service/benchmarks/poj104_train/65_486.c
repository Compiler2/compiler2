#define NUM_ITER 36208

#include <header.h>

int main_bench(){
	int n,i,a,b,p=0,q=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			p++;
		}
		if(a==0&&b==2){
			q++;
		}
		if(a==0&&b==0){
		
		}
		if(a==1&&b==0){
			q++;
		}
		if(a==1&&b==1){
		
		}
		if(a==1&&b==2){
			p++;
		}
		if(a==2&&b==0){
			p++;
		}
		if(a==2&&b==2){
		
		}
		if(a==2&&b==1){
			q++;
		}
	}
	if(p==q){
		my_printf("Tie");
	}
	if(p>q){
		my_printf("A");
	}
	if(q>p){
		my_printf("B");
	}
	return 0;
}