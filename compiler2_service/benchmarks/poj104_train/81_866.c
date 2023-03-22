#define NUM_ITER 217257

#include <header.h>

int main_bench(){
	int i,a[5][5],b[5],j,k,z=0,n,m;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	my_scanf("%d%d",&n,&m);
	if(n>=0&&n<5&&m>=0&&m<5){
		for(k=0;k<5;k++){
			b[k]=a[m][k];
			a[m][k]=a[n][k];
			a[n][k]=b[k];
		}
		z=1;
	}
	if(z==0){
		my_printf("error");
	}
	if(z==1){
		for(i=0;i<5;i++){
			my_printf("%d",a[i][0]);
			for(j=1;j<4;j++){
				my_printf(" %d",a[i][j]);
			}
			my_printf(" %d\n",a[i][4]);
		}
	}
	return 0;
}
