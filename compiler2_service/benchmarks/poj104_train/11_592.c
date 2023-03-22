#define NUM_ITER 1231694

#include <header.h>

int main_bench()        
{                         
  int year,month,day;
  int k=0;
  int monthday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  my_scanf("%d %d %d",&year,&month,&day);
  if(month==1)k=k+day;
  else if(month==2)k=k+31+day;
  else if(month==3)k=k+31+28+day;
  else if(month==4)k=k+31+28+31+day;
  else if(month==5)k=k+31+28+31+30+day;
  else if(month==6)k=k+31+28+31+30+31+day;
  else if(month==7)k=k+31+28+31+30+31+30+day;
  else if(month==8)k=k+31+28+31+30+31+30+31+day;
  else if(month==9)k=k+31+28+31+30+31+30+31+31+day;
  else if(month==10)k=k+31+28+31+30+31+30+31+31+30+day;
  else if(month==11)k=k+31+28+31+30+31+30+31+31+30+31+day;
  else if(month==12)k=k+31+28+31+30+31+30+31+31+30+31+30+day;
  if( (( (year%4==0)&&(year%100!=0) ) ||(year%400==0))&&(month>2))k=k+1;
  my_printf("%d",k);
  return 0;
}