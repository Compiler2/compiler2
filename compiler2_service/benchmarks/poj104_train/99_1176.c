#define NUM_ITER 55919

#include <header.h>

int read();
void tongji();
void print();
int n,a[4],b[100];
int main_bench()
{
    read();
    tongji();
    print();
    return 0;
}
int read()
{
    int i;
    my_scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        my_scanf("%d",&b[i]);
    }
    for (i=1;i<=4;i++){
        a[i]=0;
    }
    return 0;
}
void tongji()
{
    int i;
    for (i=1;i<=n;i++)
    {
        if (b[i]<=18)
        {
            a[1]++;
        }else {
            if (b[i]<=35)
            {
                a[2]++;
            } else {
                if (b[i]<=60)
                {
                    a[3]++;
                } else {
                    a[4]++;
                }
            }
        }
    }
    return;
}
void print()
{
    double c[4];
    int i;
    for (i=1;i<=4;i++)
    {c[i]=100.00*a[i]/n;}
    my_printf("1-18: %.2lf%%\n",c[1]);
    my_printf("19-35: %.2lf%%\n",c[2]);
    my_printf("36-60: %.2lf%%\n",c[3]);
    my_printf("Over60: %.2lf%%",c[4]);
    return;
}



