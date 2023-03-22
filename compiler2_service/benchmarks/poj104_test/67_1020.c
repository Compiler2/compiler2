#include <header.h>

int main_bench()
{
	int a[100][2],n,i,j;
	double b[100];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		b[i]=(double)a[i][1]/(double)a[i][0];
	}
	for(i=1;i<n;i++){
		if(b[i]-b[0]>0.05){
			my_printf("better\n");
		}
		else if(b[0]-b[i]>0.05){
			my_printf("worse\n");
		}
		else{
			my_printf("same\n");
		}
	}
	return 0;
}