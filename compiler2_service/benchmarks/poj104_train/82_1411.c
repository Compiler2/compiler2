#define NUM_ITER 39272

#include <header.h>

int main_bench()
{
	int n,i=0,a=0,d=0;
	struct xy{
		int ssy,szy;
	}xy[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&(xy[i].ssy),&(xy[i].szy));
	}
	for(i=0;i<n;i++){
		if((xy[i].ssy>=90)&&(xy[i].ssy<=140)&&(xy[i].szy<=90)&&(xy[i].szy>=60)){
			a=a+1;
		}else{
			a=0;
		}
		if(a>d){
			d=a;
		}
	}
	my_printf("%d",d);
	return 0;
}