#include <header.h>


int main_bench()
{
  int year,month,day,n_runnian=0,diyitian,m,i,sum=0;
  int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  my_scanf("%d%d%d",&year,&month,&day);
  
  n_runnian=(year-1)/100-(year-1)/400;
  n_runnian=(year-1)/4-n_runnian;
  
  
  diyitian=(year-1+n_runnian)%7;

  
  if(year%100>0){   
  if(year%4==0)
               a[2]=29;
               }
  if(year%400==0){
                 a[2]=29;
                 }
               
  
  for(i=0;i<month;i++){
                            sum=sum+a[i];
                            }
  sum=sum+day;
 
  m=(sum%7+diyitian)%7;
  
  switch (m){
         case 0 :my_printf("Sun.");break;
         case 1 :my_printf("Mon.");break;
         case 2 :my_printf("Tue.");break;
         case 3 :my_printf("Wed.");break;
         case 4 :my_printf("Thu.");break;
         case 5 :my_printf("Fri.");break;
         case 6 :my_printf("Sat.");
         }
  
  
  

  return 0;
}