#include <header.h>

int main_bench(){
	int n,x;
	double z[100],y[100];
	my_scanf("%d",&n);
	for(x=0;x<n;x++){
		my_scanf("%lf%lf",&z[x],&y[x]);
	}
	for(x=1;x<n;x++){
		if(y[x]/z[x]>(y[0]/z[0]+0.05)){my_printf("better");}
		else if(y[x]/z[x]<(y[0]/z[0]-0.05)){my_printf("worse");}
		else{my_printf("same");}
		my_printf("\n");}
		
	return 0;
}