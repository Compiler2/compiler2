#define NUM_ITER 32246

#include <header.h>

int main_bench(){
	int n,i,a[100],b[100],c[100],j=0,d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	c[i]=0;
	my_scanf("%d%d",&a[i],&b[i]);
	}
	i=0;
	for(i=i;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)
			c[j]++;
		else
			j++;
	}
	for(i=0;i<n-1;i++){
		if(c[i]>c[i+1]){
		d=c[i];c[i]=c[i+1];c[i+1]=d;
		}
	}
	my_printf("%d",c[n-1]);
		return 0;
	}