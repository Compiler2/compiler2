#define NUM_ITER 17046

#include <header.h>


int main_bench()
{
    int n,i,k=0,c,d;
    my_scanf("%d\n",&n);
    int a[n],b[n];
    
    my_scanf("%d",&a[0]);
    for(i=1;i<n;i++)
    my_scanf(" %d",&a[i]);
    for(i=0;i<n;i++)
    {
                    if(a[i]%2!=0)
                    {b[k]=a[i];
                    k++;}
                    } 
     for(c=k-1;c>0;c--)
    { for(d=0;d<c;d++)
      { if(b[d]>b[d+1])
        {i=b[d+1];
        b[d+1]=b[d];
        b[d]=i;}
    }
}
my_printf("%d",b[0]);
for(d=1;d<k;d++)
my_printf(",%d",b[d]);



return 0;
}

