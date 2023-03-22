#define NUM_ITER 570

#include <header.h>

int main_bench(){
	int a[100][100],i,j,n,x1,y1,x2,y2;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i][j]==0&&a[i][j+1]==0&&a[i+1][j]==0){
				x1=i;
				y1=j;
			}
			if(a[i][j]==0&&a[i][j-1]==0&&a[i-1][j]==0){
				x2=i;
				y2=j;
			}
		}
	}
	my_printf("%d",(x2-x1-1)*(y2-y1-1));
	return 0;
}



