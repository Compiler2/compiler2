#define NUM_ITER 1230

#include <header.h>

int main_bench()
{
    int n,k,i,j;
    int a[100];
    for(i=0;i<100;i++)
        a[i]=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m=0;
        my_scanf("%d",&m);
        if(m==0)
            a[i]=60;
        else
        {
             for(j=0;j<m;j++)
        {
            my_scanf("%d",&k);
            if((k+(j+1)*3)<=60)
            {
                a[i]=60-(j+1)*3;
            }
            else if((k+(j+1)*3)>60)
            {
                if(k<a[i])
                {
                    a[i]=k;
                }
            }
        }
        }
    }
    for(i=0;i<n;i++)
    {
        my_printf("%d\n",a[i]);
    }
   
    return 0;
}
