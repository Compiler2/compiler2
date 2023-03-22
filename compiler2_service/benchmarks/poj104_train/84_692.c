#include <header.h>

int main_bench(){
	int n,i,max,sum;
	int a[99];
	my_scanf("%d%d",&n,&a[0]);
	max=a[0];
	sum=a[0];
	for(i=1;i<=n-1;i++){
		my_scanf("%d",&a[i]);
		if(a[i]>max){
			sum=max;
			max=a[i];
		}
		if(max>a[i]&&(a[i]>sum)){
			sum=a[i];
		}
	}
	if(i<=99){
		my_printf("%d\n%d",max,sum);
	}
	return 0;
}