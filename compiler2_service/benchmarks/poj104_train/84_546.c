#include <header.h>

int main_bench() {
	int i,n,f;
	int e=0;
	int maxi=0;
	int a[100];
	my_scanf("%d",&n);
	for(i=1;i<=n;i++){
		my_scanf("%d",&a[i]);
		if(a[i]>maxi){
			f=maxi;			
			maxi=a[i];
		}
		else if(a[i]>e){
			e=a[i];
		}
	}
	my_printf("%d\n",maxi);	
	if(f>e){
		my_printf("%d\n",f);
	}
	else{
		my_printf("%d\n",e);
	}
	return 0;
}