#define NUM_ITER 39057

#include <header.h>


int main_bench()
{
	int i,a[100],n;
	int e=0;

	for(i=0;i<100;i++){
			 a[i]=0;
	}

	my_scanf ("%d",&n);

	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			e=a[i+1];
			a[i+1]=a[i];
			a[i]=e;	
		}
	}	

	for(i=0;i<n-2;i++){
		if(a[i]>a[i+1]){
			e=a[i+1];
			a[i+1]=a[i];	
			a[i]=e;
		}
	}

         my_printf("%d\n%d",a[n-1],a[n-2]);
	return 0;
}