#define NUM_ITER 31072

#include <header.h>

int main_bench(){
int i,k,sz[1000],sf[1000],n;
double sc[1000];
my_scanf("%d",&n);
for(i=0;i<n;i++){
	my_scanf("%d %d",&(sz[i]),&(sf[i]));
}
for(i=0;i<n;i++){
	sc[i]=sf[i]*1.0/sz[i];
}
for(i=1;i<n;i++){
	if(sc[i]-sc[0]>0.05){
		my_printf("better\n");
	}
	else if(sc[0]-sc[i]>0.05){
		my_printf("worse\n");
	}
	else  {my_printf("same\n");
	}
}
return 0;
}
