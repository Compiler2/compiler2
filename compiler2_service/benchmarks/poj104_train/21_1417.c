#define NUM_ITER 33022

#include <header.h>

int main_bench(){
	int n,sum=0,i;
	double f;
	my_scanf("%d",&n);
        double *c=(double *)malloc(sizeof(double)*n);
	int *a=(int *)malloc(sizeof(int)*n);         
	int *b=(int *)malloc(sizeof(int)*n);         
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		sum+=a[i];
	}
	f=(double)sum/n;                             
	for(i=0;i<n;i++){
		c[i]=(a[i]-f)>0?a[i]-f:f-a[i];       
	}
	int m=0;
	for(i=0;i<n;i++){
		if(c[i]>c[m]){
			m=i;                         
		}
	}
	int x=0;
	for(i=0;i<n;i++){
		if(c[i]==c[m]){
			b[x]=a[i];                   
			x++;
		}

	}if(x==1){
		my_printf("%d",b[0]);                   
	}else{
		my_printf("%d",b[0]);
		for(i=1;i<x;i++){
			my_printf(",%d",b[i]);
		}
	}
	
	return 0;
}