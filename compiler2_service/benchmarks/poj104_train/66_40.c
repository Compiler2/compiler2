#define NUM_ITER 28969

#include <header.h>

int main_bench()
{
   long int year,sum=0;
   int month,day,i,j;
   my_scanf("%d%d%d",&year,&month,&day);
   year=year-(year-1)/400*400;
   for(j=1;j<year;j++)
   {
    if(j%4==0&&j%100!=0||j%400==0) sum+=2;
    else   sum++;
   }
    int s[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(i=0;i<month-1;i++)
     sum+=s[i];
     sum+=day;
     if((year%4==0&&year%100!=0||year%400==0)&&month>2)
     sum++;
    switch(sum%7)
    {
      case 0:  my_printf("Sun.\n");   break;
      case 1:  my_printf("Mon.\n");   break;
      case 2:  my_printf("Tue.\n");   break;
      case 3:  my_printf("Wed.\n");   break;
      case 4:  my_printf("Thu.\n");   break;
      case 5:  my_printf("Fri.\n");   break;
      default: my_printf("Sat.\n");
     }
  return 0;
}