#define NUM_ITER 5264

#include <header.h>

int main_bench()
{
    int *p,i,n,j,k;
    p=(int*)malloc(10000*sizeof(int));
    *(p+1)=*p=1;
    my_scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        my_scanf("%d",&k);
        if(k>2)
        {
            for(i=2;i<k;i++)
            *(p+i)=*(p+i-1)+*(p+i-2);
            my_printf("%d\n",*(p+k-1));
        }
        else my_printf("%d\n",*(p+k-1));
    }
}
