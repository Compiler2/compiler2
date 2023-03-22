#define NUM_ITER 23518

#include <header.h>

int main_bench()
{
    int n;
    float j,k,l,m;
    my_scanf("%d",&n);
    my_scanf("%f %f",&j,&k);
    l=0.05+k/j;
    m=-0.05+k/j;
    float a[100][2];
    for(int i=0;i<n-1;i++)
    {
        my_scanf("%f %f",&a[i][0],&a[i][1]);
        if(a[i][1]/a[i][0]>l)
        {
            my_printf("better\n");
        }
        else
        {
            if(a[i][1]/a[i][0]<m)
            {
                my_printf("worse\n");
            }
            else
            {
                my_printf("same\n");
            }
        }
    }
    return 0;
}
