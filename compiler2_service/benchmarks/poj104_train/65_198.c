#define NUM_ITER 34959

#include <header.h>

int main_bench(){
	int n,i,a,b,x,y;
        x=0,y=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a,&b);
		if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){x+=1;}
		else if((a==1&&b==0)||(a==2&&b==1)||(a==0&&b==2)){y+=1;}
		else if((a==1&&b==1)||(a==2&&b==2)||(a==0&&b==0)){x+=0,y+=0;}
	}
	if(x==y){my_printf("Tie");}
	else if(x>y){my_printf("A");}
	else if(x<y){my_printf("B");}
	return 0;
}