#define NUM_ITER 33404

#include <header.h>

int main_bench()
{
	int n,i;
	int a[100][100];
	float b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i][0],&a[i][1]);
		b[i]=(float)a[i][1]/a[i][0];
	}
	for(i=1;i<n;i++){
		if(b[0]-b[i]>0.05){
			my_printf("worse");
			
		}
		else if(b[i]-b[0]>0.05){
			my_printf("better");
		}
		else{
			my_printf("same");
		}
		my_printf("\n");
	}
	return 0;
}