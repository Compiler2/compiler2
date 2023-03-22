#include <header.h>

int main_bench(){
    int n,i,a[10000],b[10000],k,t;
    char result='y';
    my_scanf("%d",&n);
    for(i=1;i<=n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(t=1;t<n;t++){
		for(k=1;k<n;k++){
			for(i=k+1;i<=n;i++){
				if(a[k]>=a[i]&&a[k]<=b[i]&&b[k]>=b[i]){
					a[k]=a[i];
				}else if(b[k]>=a[i]&&b[k]<=b[i]&&a[k]<=a[i]){
					b[k]=b[i];
				}else if(b[k]>=a[i]&&b[k]<=b[i]&&a[k]>=a[i]){
					a[k]=a[i];
				    b[k]=b[i];
				}
			}
		}
	}
	for(i=1;i<=n;i++){
		if(a[1]<=a[i]&&b[1]>=b[i]){
			result='y';
		}else{
			result='n';
			break;
		}
	}
	if(result=='y'){
		my_printf("%d %d",a[1],b[1]);
	}else if(result=='n'){
		my_printf("no");
	}
    return 0;
}
