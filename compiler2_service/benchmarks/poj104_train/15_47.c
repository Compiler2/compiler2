#define NUM_ITER 649

#include <header.h>

int main_bench(){
	int n,i,j,k=1,m=1,x[100],y[100],location[100][100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			my_scanf("%d",&location[i][j]);
			if(location[i][j]==0){
				x[k]=j;
				k++;
				y[m]=i;
				m++;
			}
		}
	}
	my_printf("%d\n",(y[m-1]-y[1]-1)*(x[k-1]-x[1]-1));
	return 0;
}
