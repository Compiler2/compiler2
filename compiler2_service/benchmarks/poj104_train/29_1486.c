#define NUM_ITER 2553

#include <header.h>

int main_bench()
{
    int m,n;
    float a[100]={0};
    float b[100]={0.0};
    my_scanf("%d",&m);
    int i, j;
    for(j=0;j<m;j++)
    {
        my_scanf("%d",&n);
        float sum=0;

         for(i=0;i<n+1;i++)
        {
            if(i==0)
            {
            a[i]=1;

            }
            if(i==1)
            a[i]=2;
           if(i>1)
            a[i]=a[i-1]+a[i-2];
        }
        for(i=0;i<n;i++)
        {
            b[i]=(float)(a[i+1]/a[i]);
            sum=sum+b[i];
        }
        my_printf("%.3f\n",sum);
    }
    return 0;
}
