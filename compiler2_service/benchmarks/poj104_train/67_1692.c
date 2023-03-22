#define NUM_ITER 33852

#include <header.h>

int main_bench(){
	int n,i;
	double a,b;
	my_scanf("%d",&n);
	struct lf{
		int x,y;
	}*lfs;
	lfs=(struct lf*)malloc(sizeof(struct lf)*n);
	for (i=0;i<n;i++){
		my_scanf("%d%d",&(lfs[i].x),&(lfs[i].y));
	}
	a=(1.0*(lfs[0].y))/(lfs[0].x);
	for (i=1;i<n;i++){
		b=(1.0*(lfs[i].y))/(lfs[i].x);
		if (b-a>0.05){
			my_printf("\nbetter");
		}else if(a-b>0.05){
			my_printf("\nworse");
		}else{
			my_printf("\nsame");
		}
	}
	return 0;
}