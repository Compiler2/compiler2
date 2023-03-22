#define NUM_ITER 6171

#include <header.h>







int main_bench()
{
	int n;
	int arr[100];
	my_scanf("%d",&n);
	int i,j;

	for (i=0;i<n;i++) {
		my_scanf("%d",&arr[i]);
	}

	int t,k=0;

	for (i=0;i<n;i++) {
		for (j=i;j<n;j++) {
			if (arr[i]<arr[j]) {
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;



			}
		}
	}

	for (i=0;i<2;i++) {
		my_printf("%d\n",arr[i]);
	}
	return 0;
}
