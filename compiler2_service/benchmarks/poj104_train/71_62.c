#define NUM_ITER 4017

#include <header.h>

int mon;
int day(),month[12]={31,28,31,30,31,30,31,31,30,31,30,31};

int main_bench(){
    int i,j,n,year,month1,month2,days1,days2,daysbetween;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         my_scanf("%d %d %d",&year,&month1,&month2);
         if((year%4==0 && year%100!=0) || year%400==0)
               month[1]++;
         days1=day(month1);
         days2=day(month2);
         daysbetween=days1-days2;
         if(daysbetween%7==0)
               my_printf("YES\n");
         else
               my_printf("NO\n");
         month[1]=28;
    }
    return 0;
}

int day(int mon){
    int k,days=0;
    for(k=0;k<mon-1;k++)
       days+=month[k];
    return days;
}
