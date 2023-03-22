#define NUM_ITER 54274

#include <header.h>


int main_bench()
{
	int n,d,x;
	my_scanf("%d",&n);
	int arr[100]={0};
	for(int i=0;i<n;i++){
		my_scanf("%d",&arr[i]);
	}
	d=0;
	x=0;
	for(int k=0;k<n;k++){
		if(arr[k]>d){
			d=arr[k];
		}
	}
	for(int j=0;j<n;j++){
			if(x<=arr[j]&&arr[j]<d){
				x=arr[j];
			}
	}
	my_printf("%d\n%d\n",d,x);
	return 0;
}
