#define NUM_ITER 21488

#include <header.h>

int t[10001];
int comp ( const void *a, const void *b )
{
    return * ( int * ) a - * ( int * ) b;
}
int main_bench()
{

   int i,n;
   my_scanf("%d",&n);
    for(i=0;i<n;i++)

    my_scanf("%d",&t[i]);
    qsort(t,n,sizeof(int),comp);
    for(i=0;t[i]%2;i++)
    my_printf("%d",t[i]);
    for(;i<n;i++)
    if(t[i]%2)
    my_printf(",%d",t[i]);
    return 0;
}

