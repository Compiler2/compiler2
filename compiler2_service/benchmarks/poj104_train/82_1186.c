#define NUM_ITER 33974

#include <header.h>

int main_bench(){
	int n,h[100],l[100],hour[101]={0},i,max=0;
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d %d\n",&h[i],&l[i]);
		if(h[i]>=90&&h[i]<=140&&l[i]>=60&&l[i]<=90){hour[i]=hour[i-1]+1;}
		if(hour[i]>=max){max=hour[i];}}
	my_printf("%d",max);
	return 0;
}



	