#include <header.h>

int reverse  (int num)
{
    int a[12];
    int i,j,k,p;
    if(num==0)
    {
        my_printf("0");
    }
    else
    {
        if(num>0)
        {
            a[0]=1;
        }
        if(num<0)
        {
           a[0]=0;
           num=0-num;
        }
        if(a[0]==0)
        {
           my_printf("-");
        }
        for(i=1;num!=0;i++)
        {
           a[i]=num%10;
           num=(num-a[i])/10;
        }
        a[i]=10;
        for(j=1;a[j]==0;j++)
        {
           p=1;
        }
        for(k=j;a[k]!=10;k++)
        {
           my_printf("%d",a[k]);
        }
        my_printf("\n");
    }
    return 0;
}
main_bench()
{
    int a,i;
    for(i=1;i<=6;i++)
    {
        my_scanf("%d",&a);
        reverse(a);
    }
}