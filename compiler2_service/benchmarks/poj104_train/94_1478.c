#define NUM_ITER 15036

#include <header.h>

int main_bench()
{
    int n,i,j=0;
    int a[500],b[500];
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    my_scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if((a[i])%2==1)
    {
                  b[j]=a[i];
                  j++;
    }
    }
    int k=j;
    int m,t;
    for(m=0;m<k;m++)
    my_scanf("%d",&b[m]);
    for(m=k-1;m>0;m--)
    {
                for(t=0;t<m;t++)
                {
                int tmp=b[t];
                if(tmp>b[t+1])
                {
                b[t]=b[t+1];
                b[t+1]=tmp;
                }
                }
                }
    for(m=0;m<k;m++)
    {
                 if(m==0)
                 my_printf("%d",b[0]);
                 else
                 my_printf(",%d",b[m]);
                 }
                 return 0;
                 }