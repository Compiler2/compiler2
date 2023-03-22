#define NUM_ITER 29540

#include <header.h>

int main_bench(){
int m,n,i,j;
int a[100],b[100],c[100];
	for(i=0;i<99;i++){
		c[i]=0;
	}
	my_scanf("%d",&n);
j=0;
for(i=0;i<n;i++){
	my_scanf("%d %d",&a[i],&b[i]);
	if(a[i]<=140&&a[i]>=90&&b[i]<=90&&b[i]>=60){
		c[j]++;
	}else{
		j++;
	}
}
	for(i=0;i<99;i++){
		if(c[i]>c[i+1]){
			m=c[i+1];
			c[i+1]=c[i];
			c[i]=m;
		}
	}
	my_printf("%d",c[99]);
	return 0;
}