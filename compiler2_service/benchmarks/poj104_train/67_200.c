#include <header.h>

int main_bench(){
	int data[100][3];
	int n,a,b;
	my_scanf("%d",&n);
	my_scanf("%d %d",&a,&b);
	double c;
	c=1.0*b/a;
	int i,j;
	for(i=0;i<n-1;i++){
		for (j=0;j<2;j++){
			my_scanf("%d",&(data[i][j]));
		}
	}
    float buff=0;
	for(i=0;i<n-1;i++){
		
		
		
		buff=(float)data[i][1]/data[i][0];
		if ((buff-c) > 0.05){
			my_printf("better\n");
		}
		else if ((c-buff) > 0.05){
			my_printf("worse\n");
		}
		else if ((c-buff)<0.05||(buff-c)<0.05){my_printf("same\n");}
		
		
	}
	return 0;
}