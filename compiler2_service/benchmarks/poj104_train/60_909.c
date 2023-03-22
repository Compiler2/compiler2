#include <header.h>

int sushu(int x);
int main_bench(){
	int n,i,s[10000],k=0;
	my_scanf("%d",&n);
	for(i=3;i<=n;i++){
		if(sushu(i)){
			s[k]=i;
			k++;
		}
	}
	if(k==1){
		my_printf("empty");
	}else{
	for(i=0;i<k-1;i++){
		if(s[i+1]-s[i]==2){
			my_printf("%d %d\n",s[i],s[i+1]);
		}
	}
	}
	return 0;
}
int sushu(int x){
	int j;
	for(j=2;j<x;j++){
		if(x%j==0){
			return 0;
		}
	}
	return 1;
}