#define NUM_ITER 575

#include <header.h>

int main_bench(){
	int row, col, sz[100][100], i, j, a, b;	
	my_scanf("%d%d", &row, &col);
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			my_scanf("%d", &sz[i][j]);
		}
	}
	for(i=0;i<col;i++){
		a=i;
		b=0;
		for(j=0;j<=i;j++){
			my_printf("%d\n", sz[b][a]);
			b++;
			a--;
			if(b==row)
				break;
		}
	}
	for(i=1;i<row;i++){
		b=i;
		a=col-1;
		for(j=i;j<row;j++){
			my_printf("%d\n", sz[b][a]);
			b++;
			a--;
			if(a==-1)
			     break;
		}
		
	}
	return 0;
}