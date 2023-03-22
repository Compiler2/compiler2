#define NUM_ITER 5338

#include <header.h>

int main_bench()
{
	int i,j,t,n,a[500],num=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]%2!=0&&num==0){
			my_printf("%d",a[i]);
			num++;
			continue;
		}
		if(a[i]%2!=0&&num!=0){
			my_printf(",%d",a[i]);
		}
	}
	return 0;
}
