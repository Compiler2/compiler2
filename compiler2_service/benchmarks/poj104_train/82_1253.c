#define NUM_ITER 37632

#include <header.h>

int main_bench(){
	int n,i,max,l,r,s[100]={0},z=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&l,&r);
		if(l>=90&&l<=140&&r>=60&&r<=90){
			s[z]++;
		}else{
			z++;
		}
	}
	if(l>=90&&l<=140&&r>=60&&r<=90){
		z++;
	}
	for(i=0;i<z;i++){
		if(i==0||max<s[i]){
			max=s[i];
		}
	}
	my_printf("%d",max);
	return 0;
}