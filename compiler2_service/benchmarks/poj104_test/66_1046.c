#include <header.h>

int a[12]={0,31,28,31,30,31,30,31,31,30,31,30};
int year,month,week,day,d1,d2;
int pd(int x)
{   if(x%400==0||(x%100!=0&&x%4==0))
    return 1;else return 0;
}
int main_bench()
{   int i;
    my_scanf("%d%d%d",&year,&month,&day);  
    while(year>1600) year-=1600;  
    if(pd(year)) a[2]++;
    for(i=1,d2=0;i<year;i++) 
    {   d2+=(pd(i))? 366:365;
        d2=d2%7;
    }
    for(i=1,d1=0;i<month;i++)
    {   d1+=a[i];
        d1=d1%7;
    }
    week=(d1+d2+day)%7;
    switch(week)
    {
    case 1:my_printf("Mon.\n");break;
    case 2:my_printf("Tue.\n");break;
    case 3:my_printf("Wed.\n");break;
    case 4:my_printf("Thu.\n");break;
    case 5:my_printf("Fri.\n");break;
    case 6:my_printf("Sat.\n");break;
    case 0:my_printf("Sun.\n");break;
    }
    getchar();getchar();
    return 0;
}
