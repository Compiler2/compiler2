#define NUM_ITER 34626

#include <header.h>

int main_bench(){
	int i, n, a=0, b=0, kg[300][5];
	my_scanf("%d", &n);
	for(i=0;i<n;i++){
		my_scanf("%d%d", &kg[i][0], &kg[i][1]);
		if(kg[i][0]==0&&kg[i][1]==1){
			a++;
		}else if(kg[i][0]==0&&kg[i][1]==2){
			b++;
		}else if(kg[i][0]==1&&kg[i][1]==0){
			b++;
		}else if(kg[i][0]==1&&kg[i][1]==2){
			a++;
		}else if(kg[i][0]==2&&kg[i][1]==0){
			a++;
		}else if(kg[i][0]==2&&kg[i][1]==1){
			b++;
		}
	}
	if(a>b){
		my_printf("A");
	}else if(a<b){
		my_printf("B");
	}else{
		my_printf("Tie");
	}
	return 0;
}