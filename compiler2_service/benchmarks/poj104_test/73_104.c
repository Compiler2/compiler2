#define NUM_ITER 205325

#include <header.h>


int main_bench(){
	int a[5][5];
	int min;
	int i,j,k,l,result=0;
	for(j=0;j<5;j++){
		for(i=0;i<5;i++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<5;i++){
		min=a[i][0];
		for(j=0;j<5;j++){
			if(a[i][j]<=min){
				min=a[i][j];
				k=j;
			}
		}
		for(l=0;l<5;l++){

			if(a[l][k]>a[i][k])break;
			if(l==4){
				result=1;
				my_printf("%d %d %d",k+1,i+1,a[i][k]);
			}

		}
	}
	if(result==0)my_printf("not found");	
	
	return 0;
}