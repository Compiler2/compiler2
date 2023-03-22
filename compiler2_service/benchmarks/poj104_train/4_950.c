#include <header.h>

int main_bench(){
	int shuzu[100][100];
	int i,j,k,n,row,col,shuru;
	my_scanf("%d %d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&shuru);
			shuzu[i][j]=shuru;
		}
	}
	for(k=0;k<=row+col-2;k++){
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				if(i+j==k){
					my_printf("%d\n",shuzu[i][j]);
				}
			}
		}
	}
	return 0;

}