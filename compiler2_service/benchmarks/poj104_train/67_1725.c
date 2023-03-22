#define NUM_ITER 33069

#include <header.h>

int main_bench(){
	int n,s[1000][2];
	double y[1000];
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		my_scanf("%d%d",&s[i][0],&s[i][1]);
        y[i]=s[i][1]*1.0/s[i][0];
		
	}
	for(int j=1;j<n;j++){
		if((y[j]-y[0])>0.05){
			my_printf("better");
		}else if((y[0]-y[j])>0.05){
			my_printf("worse");
		}else{my_printf("same");}
		my_printf("\n");
	}
return 0;
}