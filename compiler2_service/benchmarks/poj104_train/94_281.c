#include <header.h>

int main_bench(){
	int N,n,k=1,i=0,j=0,a[500],b[500],e;
	my_scanf("%d",&N);
	for(i=0;i<N;i++){
		my_scanf("%d",&a[i]);
	}
	i=0;
	for(i=0;i<N;i++){
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
		}
	}
    n=j;
	i=0;
	for(k=1;k<=n;k++){
		for(i=0;i<n-k;i++){
			if(b[i]>b[i+1]){
				e=b[i];
				b[i]=b[i+1];
				b[i+1]=e;
			}
		}
	i=0;
	}
	for(i=0;i<n;i++){
		if(i!=n-1){
			my_printf("%d,",b[i]);
		}else{
			my_printf("%d",b[i]);
		}
	}

return 0;
}