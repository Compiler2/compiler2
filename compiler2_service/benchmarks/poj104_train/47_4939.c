#define NUM_ITER 49621

#include <header.h>


int main_bench()
{
	int a[100];
	int n,t;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++){
		my_scanf("%d",&a[i]);
	}
	if(n%2==0){
		for(i=0;i<=n/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<=n-1;i++)
			if(i<n-1)
			my_printf("%d ",a[i]);
                           if(i=n-1)
			my_printf("%d",a[i]);
	}
	if(n%2==1){
		for(i=0;i<=(n-1)/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-i-1]=t;
		}
		for(i=0;i<=n-1;i++)
                           if(i<n-1)
			my_printf("%d ",a[i]);
                           if(i=n-1)
			my_printf("%d",a[i]);
	}
	return  0;
}
