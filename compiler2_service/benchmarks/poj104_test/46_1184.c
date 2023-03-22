#define NUM_ITER 584

#include <header.h>

int main_bench()
{
	int row,col;
	my_scanf("%d %d",&row,&col);
	int sz[100][100];
	int i,j;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}
	int n,time=0;
	i=0,j=0;
	for(n=0;;n++){
		for(;j<col-n;j++){
			my_printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		j--;
		i++;
		for(;i<row-n;i++){
			my_printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		i--;
		j--;
		for(;j>n-1;j--){
			my_printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		j++;
		i--;
		for(;i>n;i--){
			my_printf("%d\n",sz[i][j]);
			time++;
			}
		if(time==row*col){
				break;
			}
		i++;
		j++;
	}
	return 0;
}

