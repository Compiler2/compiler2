#define NUM_ITER 52031

#include <header.h>

int main_bench()
{
	int i,m,n,*a,*b;
	my_scanf("%d %d",&n,&m);
	a=(int*)malloc(n*sizeof(int));
	b=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++) my_scanf("%d",a+i);
	for(i=0;i<n-m;i++)*(b+i)=*(a+i);
	for(i=0;i<m;i++)*(a+i)=*(a+n-m+i);
	for(i=0;i<n-m;i++)*(a+m+i)=*(b+i);
	for(i=0;i<n-1;i++)my_printf("%d ",*(a+i));my_printf("%d\n",*(a+i));
	free(a);free(b);
}
