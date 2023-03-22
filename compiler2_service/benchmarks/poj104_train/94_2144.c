#include <header.h>

int main_bench()
{
    int n,*a,i,k=0,*b,t,j;
    my_scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    b=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
                    if(a[i]%2!=0) {
                                        b[k]=a[i];
                                        k+=1;
                                   }
    }
    for(i=0;i<k-1;i++)
    {
                    for(j=i+1;j<k;j++)
                    {
                                    if(b[j]<b[i])
                                    {
                                                 t=b[j];
                                                 b[j]=b[i];
                                                 b[i]=t;
                                    }
                    }
    }
    for(i=0;i<k;i++) 
    {
                     if(i) my_printf(",");
                     my_printf("%d",b[i]);
    }
    return 0;
}