#define NUM_ITER 642

#include <header.h>

int main_bench(){
	int a=0,b=0,i=0,j=0,p=0,q=0,m=0,n=0,x1=0,y=0;
	my_scanf("%d",&x1);
	y=0;
	for (i=1;i<=x1;i++){
		for (j=1;j<=x1;j++){
			my_scanf("%d",&a);
			if ((a==0)&&(y==0)){
				p=i;
				q=j;
				y=1;
			}
			else if (a==0){
				m=i;
				n=j;
			}
		}
	}
	b=(m-p-1)*(n-q-1);
	my_printf("%d",b);
	return 0;
}
