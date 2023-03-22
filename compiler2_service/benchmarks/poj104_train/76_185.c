#define NUM_ITER 6622

#include <header.h>

int main_bench(){
	int a[10000],b[10000],c[10000],i,k,n;
	int max=0,min=10000;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]<min){min=a[i];}
		if(b[i]>max){max=b[i];}
	}
	for(i=2*min;i<=2*max;i++){
		c[i]=1;
	}
	for(i=0;i<n;i++){
		for(k=2*a[i];k<=2*b[i];k++){
			c[k]=0;
		}
	}
	for(i=2*min;i<=2*max;i++){
		if(c[i]==1){
			my_printf("no");
			return 0;
		}
	}
	my_printf("%d %d",min,max);
    return 0;	
}

