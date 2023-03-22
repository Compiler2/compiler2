#include <header.h>

int main_bench(){
	int n;
	int a[501];
	int b[501];
	int temp;
	int i,j,k=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
		if(a[i]%2==1){
			b[k]=a[i];
			k++;
		}
	}
	for(i=0;i<k;i++){
		for(j=i+1;j<k;j++){
			if(b[j]<b[i]){
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	my_printf("%d",b[0]);
	for(i=1;i<k;i++){
		my_printf(",%d",b[i]);
	}
	return 0;
}




	