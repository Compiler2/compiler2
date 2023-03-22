#define NUM_ITER 392371

#include <header.h>


    int reverse(int num)
    {
        int m;
        int d=0;
        m=num;
        while(m!=0)
        {
                   d=d*10+m%10;
                   m=m/10;
        }
        return d;
    }
    int main_bench()
{
    int i,j,a[1000],b[1000],c;
    for(i=0;i<6;i++)
    {
                    my_scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
                    if(a[i]>=0)
                    b[i]=reverse(a[i]);
                    else
                    {
                    j=0-a[i];
                    c=reverse(j);
                    b[i]=0-c;
                    }
    }
    for(i=0;i<6;i++)
    {
                    my_printf("%d\n",b[i]);
    }
    getchar();
    getchar();
    getchar();
}
