#define NUM_ITER 26920

#include <header.h>

int main_bench(){
    int n,i,y,z;
	double m;
	int s[1000],x[1000];
	double you[1000];
	my_scanf("%d",&n);
    my_scanf("%d%d",&z,&y);
	m=100.0*y/z;
	for(i=0;i<n-1;i++){
		my_scanf("%d%d",&s[i],&x[i]);
		you[i]=100.0*x[i]/s[i];

		if(you[i]-m>5){
			my_printf("better\n");
		}else if(m-you[i]>5){
			my_printf("worse\n");
		}else{
			my_printf("same\n");
		}
	}
	return 0;
}