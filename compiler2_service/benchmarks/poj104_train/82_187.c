#define NUM_ITER 33549

#include <header.h>

int a[100],b[100],c[100];
int main_bench(){
	int n,i,lh=0,k,e=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=0;
	}
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			c[i]=1;
		}
	}
	for(i=0;i<n;i++){
		for(k=i;;k++){
			if(c[k]==1)
				lh++;
			else if(c[k]!=1)
				break;
		}
		
		if(e<lh){
			e=lh;
			lh=0;
		}
		else lh=0;
	}
	my_printf("%d",e);
	return 0;
}
