#define NUM_ITER 16443

#include <header.h>

int main_bench()
{
    int i,j,k,n,a[300],b[300];
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf("%d",&*(a+i));
    }
    *b=*a;j=1;
    for (i=0;i<n;i++)
    {
        for (k=0;k<j;k++)
        {
        	if (*(a+i)==*(b+k)) break;
        }
        if (k==j) {*(b+j)=*(a+i);j++;}        
    }
    
    for (i=0;i<j-1;i++)
    {my_printf("%d,",*(b+i));}
    my_printf("%d",*(b+j-1));
}