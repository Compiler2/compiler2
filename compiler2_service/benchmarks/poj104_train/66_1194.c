#define NUM_ITER 50585

#include <header.h>

int isrunnian(int year){
    if(year%400 == 0 ||(year%4==0 && year%100!=0))
    return 1;
    return 0;
}
int main_bench(){
    int i,year,month,date,sum;
    int montha[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
                          {31,29,31,30,31,30,31,31,30,31,30,31}};
    my_scanf("%d%d%d",&year,&month,&date);
    sum=(year%7+(year-1)/4-(year-1)/100+(year-1)/400)%7;
    for(i=0;i<month-1;i++){
                         sum+=montha[isrunnian(year)][i]%7;
                         }
                         
    sum+=date-1;

    
    
    int d;
    d=sum%7;
    
    if(d==1)
    my_printf("Mon.");
    if(d==2)
    my_printf("Tue.");
    if(d==3)
    my_printf("Wed.");
    if(d==4)
    my_printf("Thu.");
    if(d==5)
    my_printf("Fri.");
    if(d==6)
    my_printf("Sat.");
    if(d==0)
    my_printf("Sun.");
    
                return 0;
}