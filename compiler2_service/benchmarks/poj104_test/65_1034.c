#include <header.h>


int main_bench(){
	int n,i,a,b,x=0,y=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if(a==0&&b==1){
			x++;
		}else if(a==1&&b==2){
			x++;
		}else if(a==2&&b==0){
			x++;
		}else if(a==b){
			x+=0;
		}else{
			y++;
		}
	}
	if(x>y){
		my_printf("A");
	}else if(x==y){
		my_printf("Tie");
	}else{
		my_printf("B");
	}
	return 0;
}