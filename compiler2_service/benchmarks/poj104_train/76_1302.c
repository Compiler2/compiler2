#define NUM_ITER 3647

#include <header.h>

int main_bench()
{
	int n,i,p,tem,max,a[100],b[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		for(p=0;p<n-1;p++){
			if(a[p]>a[p+1]){
				tem=a[p];
				a[p]=a[p+1];
				a[p+1]=tem;
				tem=b[p];
				b[p]=b[p+1];
				b[p+1]=tem;
			}
		}
	}
max=b[0];
for(i=0;i<n;i++){if(a[i]>max){my_printf("no");return 0;}else{if(b[i]>max){max=b[i];}}}
my_printf("%d %d",a[0],max);
	return 0;
}
