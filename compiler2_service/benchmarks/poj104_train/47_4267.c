#define NUM_ITER 52083

#include <header.h>


int main_bench()
{
    int m,i;
	my_scanf("%d",&m);
	int A[100],B[100];
	for (i=0;i<m;i++)
		my_scanf("%d",&A[i]);
	for (i=0;i<m;i++)
		B[i]=A[m-i-1];
	
	for (i=0;i<m-1;i++)
		my_printf("%d ",B[i]);
	my_printf("%d",B[m-1]);
	return 0;
}