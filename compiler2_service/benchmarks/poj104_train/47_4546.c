#include <header.h>

int main_bench() {
	int a[100],n,i,b[50];
	my_scanf("%d",&n);
	for(i=0;i<=n-1;i++) {
		my_scanf("%d", &a[i]);}
	for(i=0;i<=(n-1)/2;i++){
        b[i]=a[n-i-1];
	    a[n-i-1]=a[i];
		a[i]=b[i];}
    for(i=0;i<=n-1;i++){
		if (i<=n-2){
		my_printf("%d ",a[i]);}
		else{my_printf("%d",a[i]);}}
		return 0;
	}

		
	
	
		