#define NUM_ITER 549

#include <header.h>

int main_bench()
{
	int i,j,row,col,shuzu[100][100],n=0;
	my_scanf("%d%d",&row,&col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&shuzu[i][j]);
		}
	}
	if(row==col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				my_printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				my_printf("%d\n",shuzu[i+j][col-1-j]);
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	if(row>col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				my_printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				my_printf("%d\n",shuzu[i+j][col-1-j]);
				if((col-1-j)==0){
					break;
				}
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	if(row<col){
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				my_printf("%d\n",shuzu[j][i-j]);
				if((i-j)==0){
					break;
				}
			}
		}
		for(i=1;i<row;i++){
			for(j=0;j<col;j++){
				my_printf("%d\n",shuzu[i+j][col-1-j]);
				if((i+j+1)==row){
					break;
				}
			}
		}
	}
	return 0;
}