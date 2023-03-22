#define NUM_ITER 539

#include <header.h>


int main_bench()
{
	int row,col;
	my_scanf("%d%d",&row,&col);
	int i,j;
	int sz[101][101];
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d",&sz[i][j]);             
		}
	}

	if(row>col){
    	int x;
	    for(j=0;j<col;j++){
		    for(x=0;x<=j;x++){                       
			    my_printf("%d\n",sz[x][j-x]);
			}
		}
		int y;
		for(i=1;i<=row-col;i++){
			for(y=0;y<col;y++){
				my_printf("%d\n",sz[i+y][col-y-1]);
			}
		}
		int w;
		for(i=row-col+1;i<row;i++){
			for(w=0;w<col-1;w++){				
				my_printf("%d\n",sz[i+w][col-w-1]);
				if(i+w==row-1){
					break;
				}
			}
		}
	}else{
		int z;
		for(j=0;j<row;j++){
			for(z=0;z<=j;z++){
				my_printf("%d\n",sz[z][j-z]);
			}
		}
		int n;
		for(j=row;j<col;j++){
			for(n=0;n<row;n++){
				my_printf("%d\n",sz[n][j-n]);
			}
		}
		int m;
		for(i=1;i<row;i++){
			for(m=0;m<row-1;m++){
				my_printf("%d\n",sz[i+m][col-m-1]);
				if(i+m==row-1){
					break;
				}
			}
		}
	}

	return 0;
}

