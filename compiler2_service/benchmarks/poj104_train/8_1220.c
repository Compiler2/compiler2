#define NUM_ITER 10595

#include <header.h>

 int *p,*q,m,n;
void shuru()
{   
    my_scanf("%d%d",&m,&n);
    p=(int*)malloc(m*sizeof(int));
    q=(int*)malloc(n*sizeof(int));
	for (int i=0;i<m;i++) 
	my_scanf("%d",p+i);
	for (int i=0;i<n;i++) 
	my_scanf("%d",q+i);
}
static int cmp(const void *a, const void *b)
{
	return *(int *)a - *(int *)b;
}
void shuchu()
{
	for(int i=0;i<m;i++)
    my_printf("%d ",*(p+i));
	for(int i=0;i<n-1;i++)
	my_printf("%d ",*(q+i));
	my_printf("%d",*(q+n-1)); 
}
main_bench()
{   
    shuru();
	qsort(p,m,sizeof(int),cmp);
	qsort(q,n,sizeof(int),cmp);
	shuchu();
}
 