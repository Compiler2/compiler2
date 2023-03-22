#define NUM_ITER 5398

#include <header.h>

int main_bench(){
	int a[6][200];
	int i,j;
	int m,n,h;
	for(j=0;j<200;j++){
		m=0;
		n=0;
		h=0;
	    for(i=0;i<6;i++){
		    my_scanf("%d",&a[i][j]);
		}
		if(a[0][j]==0&&a[1][j]==0&&a[2][j]==0&&a[3][j]==0&&a[4][j]==0&&a[5][j]==0){
			break;
		}else{
	        m=a[0][j]*3600+a[1][j]*60+a[2][j];
	        n=(a[3][j]+12)*3600+a[4][j]*60+a[5][j];
	        h=n-m;
	        my_printf("%d\n",h);
		}
	}
	return 0;
}

