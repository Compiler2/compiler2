#define NUM_ITER 36720

#include <header.h>

int main_bench(){
	int n,i,a,b,aw=0,bw=0;
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d",&a,&b);
		if(a==0&&b==1){aw++;}
		if(a==1&&b==2){aw++;}
		if(a==2&&b==0){aw++;}
		if(a==1&&b==0){bw++;}
		if(a==2&&b==1){bw++;}
		if(a==0&&b==2){bw++;}}
	if(aw>bw){my_printf("A");}
	else if(aw<bw){my_printf("B");}
	else{my_printf("Tie");}
	return 0;
}