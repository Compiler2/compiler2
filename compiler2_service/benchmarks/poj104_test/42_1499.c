#include <header.h>

int main_bench()
{   int i=0,n,j,x;
	long int a[100000];
	my_scanf("%d",&n);
	my_printf("\n");
	for(i=0;i<n;i++){
		my_scanf("%ld",&a[i]);
	}
	i=0;
	my_printf("\n");
	my_scanf("%d",&x);
	while(i<n){
		if(a[i]==x){
			n=n-1;
			for(j=i;j<n;j++){
				a[j]=a[j+1];
			}
			i=i-1;
		}
		i++;
	}
	my_printf("%ld",a[0]);
	for(i=1;i<n;i++){
		my_printf(" %ld",a[i]);
	}
	return 0;
}