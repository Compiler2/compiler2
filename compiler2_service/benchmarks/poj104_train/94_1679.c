#define NUM_ITER 22662

#include <header.h>

int main_bench(){
	int n,i,j,k,v,t;
	int a[500];
	int b[500];
	my_scanf("%d",&n);
    for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	j=0;
	for(i=0;i<n;i++){
		if(a[i]%2==1){
			b[j]=a[i];
			j=j+1;
		}
		else
			continue;
	}
	for(v=0;v<j;v++){
		for(k=v+1;k<j;k++){
			if(b[v]>b[k]){
				t=b[v];
				b[v]=b[k];
				b[k]=t;
			}
		}
	}
	for(v=0;v<j;v++){
		my_printf("%d",b[v]);
		if(v<j-1)
			my_printf(",");
	}
	return 0;
}