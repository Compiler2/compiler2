#define NUM_ITER 5820

#include <header.h>

int run(int n)
{
    if(n%4==0&&n%100!=0)
        return 1;
    else if(n%400==0)
        return 1;
    else
        return 0;
}
main_bench()
{
    int n;
    my_scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int y,m1,m2,t,day=0;
        int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        my_scanf("%d %d %d",&y,&m1,&m2);
        if(run(y)==1)
            a[1]=29;
        if(m1>m2)
        {
            t=m1;
            m1=m2;
            m2=t;
        }
        for(int j=m1;j<m2;j++)
        {
            day+=a[j-1];
        }
        if(day%7==0)
            my_printf("YES\n");
        else
            my_printf("NO\n");
    }
}
