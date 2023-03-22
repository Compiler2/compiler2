#include <header.h>

int main_bench(){
	int n,k,i,a[1000],b[1000],c;
	my_scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	int j=0;
	for(i=0;i<n;i++){
		b[j]=a[i];
		j++;
	}
	for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		if(i!=j){
			c=a[i]+b[j];
			if(c==k){
				my_printf("yes");
				break;
			}else{
				if(i==n-1&&j==n-2){
					my_printf("no");
					break;
				}
			}
		}
	}
	if(c==k){
		break;
	}else{
		if(i==n-1&&j==n-2){
			break;
		}
	}
	}
	return 0;
}