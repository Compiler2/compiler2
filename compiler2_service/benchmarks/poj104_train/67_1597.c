#include <header.h>

int main_bench()
 {
	int n,a[100][2],i,j;
  	double  x,y;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&a[i][j]);}
	}   
	x=1.0*a[0][1]/a[0][0];
	for(i=1;i<n;i++){
			y=1.0*a[i][1]/a[i][0];
 			if(y-x>0.05) my_printf("better\n");
			else if(x-y>0.05) my_printf("worse\n");
			else my_printf("same\n");
			y=0;
	}
    return 0;
}
