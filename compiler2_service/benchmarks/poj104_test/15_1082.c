#define NUM_ITER 491

#include <header.h>


int main_bench(){
	int a[1000][1000];
	int n,i,k,x,y,z,w,s;
	my_scanf("%d",&n);

	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			my_scanf("%d",&a[i][k]);
		}
	}

	for(i=0;i<n;i++){
		for(k=1;k<n;k++){
			if(a[i][k-1]!=0&&a[i][k]==0&&a[i][k+1]==0&&a[i+1][k]==0){
				x=i;
				y=k;
			}
		}
	}

	for(i=1;i<n;i++){
		for(k=1;k<n-1;k++){
			if(a[i][k-1]==0&&a[i][k]==0&&a[i][k+1]!=0&&a[i-1][k]==0){
				z=i;
				w=k;
			}
		}
	}
	
	s=(z-1-x)*(w-1-y);
	my_printf("%d",s);

	return 0;
}
