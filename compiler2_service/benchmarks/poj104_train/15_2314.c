#define NUM_ITER 664

#include <header.h>

int main_bench(){
	int n ,k,i,j,count=0,fx,fy,lx,ly,start=0;
	int a[1002][1002];


	my_scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			my_scanf("%d",&a[i][j]);
			if(start==0&&a[i][j]==0){
				start=1;
				fx=i;fy=j;
			}
			if(a[i][j]==0){
				lx=i;
				ly=j;
			}
		
	}
	}

	my_printf("%d\n",(fx-lx+1)*(fy-ly+1));
	
	getchar();getchar();
	return 0;
}