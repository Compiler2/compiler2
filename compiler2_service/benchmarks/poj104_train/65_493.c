#define NUM_ITER 31969

#include <header.h>

int main_bench(){

int n,a,b,x=0,y=0;
my_scanf("%d\n",&n);
for(int i=0;i<n;i++){
	my_scanf("%d",&a);
	my_scanf("%d",&b);
	if(a==0&&b==0){
		x=x;
	}if(a==0&&b==1){
		x++;
	}if(a==0&&b==2){
		y++;
	}if(a==1&&b==0){
		y++;
	}if(a==1&&b==1){
		x=x;
	}if(a==1&&b==2){
		x++;
	}if(a==2&&b==0){
		x++;
	}if(a==2&&b==1){
		y++;
	}if(a==2&&b==2){
		x=x;
	}
}
if(x>y){
	my_printf("A");
}
if(x<y){
	my_printf("B");
}
if(x==y){
	my_printf("Tie");
}

return 0;
}
