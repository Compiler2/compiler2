#define NUM_ITER 37161

#include <header.h>

int zhengchang(int i,int j){
	if((i>=90&&i<=140)&&(j>=60&&j<=90)){
		return 1;
	}
	return 0;
}
int main_bench(){
	int n,i,a[100],b[100],k,t[100]={0},m=0,j,max;
	my_scanf("%d",&n);
	for(k=0;k<n;k++){
		my_scanf("%d%d",&a[k],&b[k]);
	}
	for(i=0;i<n;i++){
		if(zhengchang(a[i],b[i])){
			for(j=i;zhengchang(a[j],b[j]);j++){
				t[m]++;
			}
			i=j-1;
			m++;
		}
	}
	max=t[0];
	for(i=1;i<m;i++){
		if(t[i]>max){
			max=t[i];
		}
	}
	my_printf("%d",max);
	return 0;
}