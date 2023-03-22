#include <header.h>


int main_bench()
{
    int n,i,age,p1=0,p2=0,p3=0,p4=0;
    my_scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        my_scanf("%d",&age);
        if (age<=18) p1++;
        if (age>18&&age<=35) p2++;
        if (age>35&&age<=60) p3++;
        if (age>60) p4++;
    }
    my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\nOver60: %.2lf%%\n",(double)p1/n*100,(double)p2/n*100,(double)p3/n*100,(double)p4/n*100);
    return 0;
}




