#define NUM_ITER 709

#include <header.h>

int main_bench(){
	int a[100][100]={255};
	int n,i=0,j=0,x1,y1,x2,y2,x,y,s;
	my_scanf("%d",&n);
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			my_scanf("%d",&a[x][y]);
		}
	}
	for(x=0;x<n;x++){
		for(y=0;y<n;y++){
			if(a[x][y]==0){
				x1=x;
				y1=y;
				i=1;
				break;
			}
		}
		if(i==1){
			break;
		}
		else ;
	}
	for(x=n-1;x>=0;x--){
		for(y=n-1;y>=0;y--){
			if(a[x][y]==0){
				x2=x;
				y2=y;
				j=1;
				break;
			}
		}
		if(j==1){
			break;
		}
		else ;
	}
	s=(y2-y1-1)*(x2-x1-1);
	my_printf("%d",s);
	return 0;
}




	
	