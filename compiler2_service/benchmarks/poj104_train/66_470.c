#define NUM_ITER 81152

#include <header.h>

int main_bench(){
   int y,m,d,i,k=0,Day,sum,sum1,sum2=0;
    
   my_scanf("%d %d %d",&y,&m,&d);
    sum1=(y-1)+(y-1)/4-(y-1)/100+(y-1)/400;
           for(i=1;i<m;i++){
          if(i==1||i==3||i==5||i==7||i==8||i==10){
              sum2+=31;
          }
            else if(i==4||i==6||i==9||i==11){
                    sum2+=30;
            }
          else {
              if((y%100==0&&y%400==0)||(y%100!=0&&y%4==0)){
                  sum2+=29;
              }
                else {
                   sum2+=28;
                }
          }
       }
        sum2+=d;
        sum=sum1+sum2;
        Day=sum%7;
    switch(Day){
        case 0: my_printf("Sun."); break;
        case 1: my_printf("Mon."); break;
        case 2: my_printf("Tue."); break;
        case 3: my_printf("Wed."); break;
        case 4: my_printf("Thu."); break;
        case 5: my_printf("Fri."); break;
       default: my_printf("Sat.");
    } 
   return 0;   
}
