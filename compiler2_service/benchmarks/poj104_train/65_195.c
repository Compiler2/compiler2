#define NUM_ITER 25749

#include <header.h>

int main_bench(){
	int n,a[1000][2],i,j,A=0,B=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			my_scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		if(a[i][0]==0&&a[i][1]==0){;}
		if(a[i][0]==1&&a[i][1]==1){;}
		if(a[i][0]==2&&a[i][1]==2){;}
		if(a[i][0]==0&&a[i][1]==1){A++;}
		if(a[i][0]==0&&a[i][1]==2){B++;}
		if(a[i][0]==1&&a[i][1]==0){B++;}
		if(a[i][0]==1&&a[i][1]==2){A++;}
		if(a[i][0]==2&&a[i][1]==0){A++;}
		if(a[i][0]==2&&a[i][1]==1){B++;}
	}
	if(A>B){my_printf("A");}
	else if(A<B){my_printf("B");}
	else if(A=B){my_printf("Tie");}

	return 0;
}