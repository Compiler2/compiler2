#include <header.h>

int main_bench(){
	int n,a[20000],i,j,h=0,k;
	my_scanf("%d",&n);
	for(i=0;i<n;i=i+1){
		my_scanf("%d",&a[i]);
	}
	my_printf("%d",a[0]);
	for(j=1;j<n;j=j+1){
		for(k=0;k<j;k=k+1){
			if(a[j]==a[k]) {h=1;}
		}
		if(h==0){my_printf(" %d",a[j]);}
	
		else{h=0;}
 

	}







}