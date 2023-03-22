#define NUM_ITER 5247

#include <header.h>

int main_bench()
{
	int a[10000];
	int n,w,m;
	int i,j,k,t,e,x,y;
	my_scanf("%d",&w);
	n=0;
	for(i=0;i<w;i++){
		my_scanf("%d",&a[i]);
	}
	for(k=0;k<w;k++){
		if((a[k]%2)!=0){
			n++;
		}else{
			a[k]=0;
		}
	}
	for(e=w-1;e>=0;e--){
		for(j=0;j<e;j++){
			if(a[j]>a[j+1]){
				m=a[j+1];
				a[j+1]=a[j];
				a[j]=m;
			}
		}
	}
	for(t=w-n;t<w-1;t++){
		my_printf("%d,",a[t]);
	}
	my_printf("%d",a[w-1]);



	return 0;
}


