#define NUM_ITER 3016

#include <header.h>

int num(int A1[],int N1)
{
	int i;
	int c=0;
	for(i=1;i<N1;i++)
		if(A1[i]!=A1[0])
		c=c+1;
		return c;
}
void cut(int A[],int N)
{
	int b[100]={0};
	int i;
	int J=0;
	for(i=1;i<N;i++)
		if(A[i]!=A[0])
		{
		b[J]=A[i];
		J=J+1;
		}
	for(i=0;i<J;i++)
		A[i]=b[i];
}
int main_bench()
{
    int i;
    int n;
	int n0;
	int a[100]={0};
	my_scanf("%d",&n);
    for(i=0;i<n;i++)
    my_scanf("%d",&a[i]);
	my_printf("%d",a[0]);
	for(i=0;;i++)
	{
		n0=n;
		n=num(a,n);
		cut(a,n0);
		my_printf(",%d",a[0]);
		
		if(num(a,n)==0)
			break;
		
	}
}