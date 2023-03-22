#include <header.h>

int check(int y,int m)
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i,c;
    if((y%4==0&&y%100!=0)||(y%100==0&&y%400==0))
    days[2]++;
    c=1;
    for(i=1;i<m;i++)
    c=c+days[i];
    return c;
}
main_bench()
{
    int i,j,k,n,y,m1,m2;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        my_scanf("%d %d %d",&y,&m1,&m2);
        if(m1>m2)
        k=check(y,m1)-check(y,m2);
        else
        k=check(y,m2)-check(y,m1);
        if(k%7==0)
        my_printf("YES\n");
        else
        my_printf("NO\n");
    }
}
