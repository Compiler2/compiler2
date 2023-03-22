#include <header.h>

int main_bench(){
int n,i,a[100],b[100];
double x,y;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	y=(float)b[0]/a[0];
	for(i=1;i<n;i++){

		x=(float)b[i]/a[i]-y;
		
		if(x>0.05){
			my_printf("better\n");
		}
		else if(x<-0.05){
			my_printf("worse\n");
		}
		else if(x<=0.05&&x>=-0.05){
			my_printf("same\n");
		}
	}
	return 0;
}

