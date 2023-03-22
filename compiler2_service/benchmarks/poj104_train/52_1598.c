#define NUM_ITER 6941

#include <header.h>

void yid(int *p,int x,int y)
{
    int i,j,temp;
	for(i=0;i<y;i++)
	{
		temp=*(p+x-1);
		for(j=x-1;j>0;j--)
			*(p+j)=*(p+j-1);
		*p=temp;
	}
}
int main_bench()
{
    int *arr,l,a[100],n,m;
    my_scanf("%d %d",&n,&m);
	for(l=0;l<n;l++)
		my_scanf("%d",&a[l]);
	arr=a;
	yid(arr,n,m);
	my_printf("%d",*arr);
    for(arr=(a+1);arr<(a+n);arr++)
		my_printf(" %d",*arr);
}
