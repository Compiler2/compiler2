#define NUM_ITER 10510

#include <header.h>

main_bench()
{
    int n,i,j,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int year,m1,m2;
        my_scanf("%d %d %d",&year,&m1,&m2);
        int sum;
        if((year%4==0)&&(year%100)!=0||(year%400==0))
        {
             a[2]=29;
        }
        else a[2]=28;
        if(m1<m2)
        {for(j=m1,sum=0;j<m2;j++)
        {
            sum=sum+a[j];
        }}
        else
        {for(j=m2,sum=0;j<m1;j++)
        {
            sum=sum+a[j];
        }}
        if(sum%7==0)
        my_printf("YES\n");
        else
        my_printf("NO\n");
        
    }
}
