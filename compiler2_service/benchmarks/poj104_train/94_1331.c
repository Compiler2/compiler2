#define NUM_ITER 17120

#include <header.h>

int main_bench(){
	int n,a[501],k=0,i,j,m,p,b,o;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(j=0;j<n;j++){
		   if(a[j]%2==1){
			   a[k]=a[j];
			   k++;
		   }
		}
	
	for(m=1;m<k-1;m++){
		for(o=0;o<k-m;o++){
			if(a[o]>a[o+1]){
				b=a[o];
				a[o]=a[o+1];
				a[o+1]=b;
			}
		}
	}
	for(p=0;p<k;p++){
		if(p==k-1){
			my_printf("%d",a[p]);
		}
		else my_printf("%d,",a[p]);
	}
	return 0;
}