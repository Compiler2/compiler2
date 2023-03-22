#define NUM_ITER 537

#include <header.h>

int main_bench(){
	int row,col,a[101][101],i,j,k;
	my_scanf("%d%d",&row,&col);
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
		my_scanf("%d",&a[i][j]);
	    }
	}
	for(k=2;k<=row+col;k++){
		if(k<=col+1){
			for(j=k-1;j>=1&&k-j<=row;j--){
				my_printf("%d\n",a[k-j][j]);                       
	    	}
		}
		if(k>col+1){
			for(j=col;j>=1&&k-j<=row;j--){
				my_printf("%d\n",a[k-j][j]);
	    	}
		}
	}
	my_scanf("%d",&row);
	return 0;
}