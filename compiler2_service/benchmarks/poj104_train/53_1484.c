#include <header.h>

int main_bench(){
	int n,i,j;
	int a[400][3];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i][0]);
		a[i][1]=0;
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i][0]==a[j][0]){
				a[j][1]=1;
			}
		}
	}
	my_printf("%d",a[0][0]);
	for(i=1;i<n;i++){
		if(a[i][1]!=1){
			my_printf(",%d",a[i][0]);
		}
	}
	return 0;
}


	