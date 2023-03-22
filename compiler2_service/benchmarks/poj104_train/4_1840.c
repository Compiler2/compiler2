#define NUM_ITER 534

#include <header.h>

int main_bench()
{
	int row,col,a[100][100],k,j,i,m;
	my_scanf("%d %d",&row,&col);
	for(j=0;j<row;j++){
		for(i=0;i<col;i++){
			my_scanf("%d",&a[j][i]);
		}
	}

	for(i=0;i<col;i++){
		j=0;
		for(m=i;(j<row)&&(m>=0);j++,m--){
			my_printf("%d\n",a[j][m]);
		}
	}
	for(j=1;j<row;j++){
		    i=col-1;
			for(m=i,k=j;(k<row)&&(m>=0);k++,m--){
			my_printf("%d\n",a[k][m]);
		}
	}
	
	return 0;
}
