#define NUM_ITER 4434

#include <header.h>

int main_bench(){
	int m;
	int i,j;
	double e,x,y;
	my_scanf("%d",&m); 
	int*sz
		=(int*)malloc(sizeof(int)*m);
	for(i=0;i<m;i++){
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<m;i++){
		double sum=0;
		x=1.0;
		y=2.0;
		for(j=0;j<sz[i];j++){
			sum+=y/x;
			e=y;
			y=x+y;
			x=e;
		}
		my_printf("%.3lf\n",sum);
	}

	free(sz);


	return 0;
}