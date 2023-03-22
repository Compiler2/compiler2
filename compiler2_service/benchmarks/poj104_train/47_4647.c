#include <header.h>


int main_bench()
{
	int n,i;
	int A[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		int a;
		my_scanf("%d",&a);
		A[i]=a;
	}
	for(i=n-1;i>=0;i--){
		if(i>0)
		my_printf("%d ",A[i]);
		else
			my_printf("%d",A[i]);
	}
	return 0;
}
