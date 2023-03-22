#define NUM_ITER 3131

#include <header.h>


void right_shift_one(int* a,int n);
void right_shift_array(int* a,int n,int m);

int main_bench() {
	int n,m;
	my_scanf("%d %d",&n,&m);
	int* a=(int *)calloc(n,sizeof(int));
	int i;
	for(i=0;i<n;i++)
		my_scanf("%d",&(a[i]));
	right_shift_array(a,n,m);
	for(i=0;i<n-1;i++)
		my_printf("%d ",a[i]);
	my_printf("%d",a[n-1]);
	free(a);
	return 0;
}

void right_shift_array(int* a,int n,int m) {
	int i;
	for(i=0;i<m;i++)
		right_shift_one(a,n);
}

void right_shift_one(int* a,int n) {
	int temp=a[n-1];
	int i;
	for(i=n-1;i>0;i--) {
		a[i]=a[i-1];
	}
	a[0]=temp;
}