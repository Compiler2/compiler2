#define NUM_ITER 10827

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int a[50000];
	int b[50000];
	for(int i=0;i<n;i++){
		my_scanf("%d %d",&(a[i]),&(b[i]));
	}
	int sz[20001]={0};
	int min=a[0];
	int max=b[0];
	for(int h=0;h<n;h++){
		if(a[h]<min){
			min=a[h];
		}
		if(b[h]>max){
			max=b[h];
		}
	}
	for(int m=0;m<n;m++){
		for(int k=a[m];k<b[m];k++){
			sz[k]=1;
		}
	}
	for(int g=min;g<max;g++){
		if(sz[g]==0){
			my_printf("no");
			return 0;
		}
	}
	my_printf("%d %d",min,max);
	return 0;
}