#define NUM_ITER 1545

#include <header.h>

int main_bench(){
	int a[50000],b[50000],c[10002],d[10000];
	int i,n,j,k=0,l=1;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<10002;i++){
		c[i]=0;
	}
	for(i=0;i<n;i++){
		for(j=a[i];j<b[i];j++){
			c[j]=1;
		}
	}
	for(i=0;i<10001;i++){
		if(c[i]==c[i+1]){
			continue;
		}
		if(c[i]!=c[i+1]){
			k++;
			d[l]=i;
			d[l+1]=i+1;
			l=l+2;
		}
	}
	if(k==2){
		my_printf("%d %d",d[2],d[3]+1);
	}else{
			my_printf("no");
	}
	return 0;
}