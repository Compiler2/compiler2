#define NUM_ITER 567

#include <header.h>

int sz[100][100];
int main_bench(){
	int n,m,i,j,k,a1,a2,b1,b2;
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			my_scanf("%d",&sz[i][j]);
		}
	}

	for(k=0;;k++){	
		a1=k;
		a2=m-1-k;
		b1=k;
		b2=n-1-k;
		if(a1>a2||b1>b2){
			break;
		}
		if(a1==a2&&b1!=b2){
			for(i=b1;i<=b2;i++){
				my_printf("%d\n",sz[i][a1]);
			}
		}else if(b1==b2){
			for(j=a1;j<=a2;j++){
				my_printf("%d\n",sz[b1][j]);
			}
		}else if(b1==b2&&a1==a2){
			my_printf("%d\n",sz[b1][a1]);
		}else{
			for(j=a1;j<=a2;j++){
				my_printf("%d\n",sz[b1][j]);
			}
			for(i=b1+1;i<=b2;i++){
				my_printf("%d\n",sz[i][a2]);
			}
			for(j=a2-1;j>=a1;j--){
				my_printf("%d\n",sz[b2][j]);
			}
			for(i=b2-1;i>=b1+1;i--){
				my_printf("%d\n",sz[i][a1]);
			}
		}
	}
	return 0;
}