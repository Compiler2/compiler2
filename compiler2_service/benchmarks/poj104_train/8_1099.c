#define NUM_ITER 11104

#include <header.h>

int comp(const void *a,const void *b);
int main_bench()
{
	int n,m,i,j,k;
	my_scanf("%d %d",&n,&m);
	int a[n],b[m];
	for(i=0;i<n;i++)
	 my_scanf("%d",&a[i]);
	for(i=0;i<m;i++)
	 my_scanf("%d",&b[i]);	
    qsort(a,n,sizeof(int),comp);
    qsort(b,m,sizeof(int),comp);
    for(i=0;i<n;i++)
     my_printf("%d ",a[i]);
    for(i=0;i<m;i++)
     {my_printf("%d",b[i]);
      if(i<m-1)
       my_printf(" ");
     }
    return 0; 
}
int comp(const void*a,const void*b)
{
    return*(int*)a-*(int*)b;
}