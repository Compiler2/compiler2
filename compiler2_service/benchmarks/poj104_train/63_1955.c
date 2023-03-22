#define NUM_ITER 61

#include <header.h>


int main_bench(){
	int x1,y1,x2,y2,i,j,k,sum;
	my_scanf("%d %d",&x1,&y1);
	int A[x1][y1];
	for(i=1;i<=x1;i++){
		for(j=1;j<=y1;j++){
			my_scanf("%d",&A[i-1][j-1]);
		}
		
	}
	my_scanf("%d %d",&x2,&y2);
	int B[x2][y2];
	for(i=1;i<=x2;i++){
		for(j=1;j<=y2;j++){
			my_scanf("%d",&B[i-1][j-1]);
		}
		
	}
	for(i=1;i<=x1;i++){
		for(j=1;j<=y2;j++){
			sum=0;
			for(k=1;k<=x2;k++){
				sum=sum+A[i-1][k-1]*B[k-1][j-1];
			}
			if(j==1){
				my_printf("%d",sum);
			}
			else{
				my_printf(" %d",sum);
			}
		}
		my_printf("\n");
	}
} 