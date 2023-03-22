#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	double jiwei[2];
	my_scanf("%lf%lf",&jiwei[0],&jiwei[1]);
	double b;
	b=jiwei[1]/jiwei[0]*100;
	double qita[100][2];
	for(int i=0;i<n-1;i++){
        my_scanf("%lf",&qita[i][0]);
	    my_scanf("%lf",&qita[i][1]);
	}
	double a;
	 a=qita[0][1]/qita[0][0]*100;
        if(a-b>5){
			my_printf("better");
		}
		else if(b-a>5){
			my_printf("worse");
		}
		else{
			my_printf("same");
		}
	for(int j=1;j<n-1;j++){
        a=qita[j][1]/qita[j][0]*100;
		if(a-b>5){
			my_printf("\nbetter");
		}
		else if(b-a>5){
			my_printf("\nworse");
		}
		else{
			my_printf("\nsame");
		}
	}
	return 0;
}
