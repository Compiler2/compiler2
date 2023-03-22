#define NUM_ITER 53137

#include <header.h>

int main_bench()
{
	void inv(int array[ ],int k);
	int i,n,a[100],*p;
	my_scanf("%d",&n);
	for(p=a;p<a+n;p++)
		my_scanf("%d",p);
	inv(a,n);
	my_printf("%d",*a);
	for(p=a+1;p<a+n;p++)
        my_printf(" %d",*p);
}

    void inv(int array[ ],int k)
	{
		int temp,j,m;
        m=k/2;
		for(j=0;j<m;j++)
		{
			temp=*(array+k-j-1);
			*(array+k-j-1)=*(array+j);
			*(array+j)=temp;
		}
		return;
	}