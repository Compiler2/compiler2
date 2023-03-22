#define NUM_ITER 1334848

#include <header.h>




int main_bench()
{
    int y=0,m=0,d=0;
    my_scanf("%d %d %d",&y,&m,&d);
    if(m==1||m==2)
    {
                  m=m+12;
                  y--;
    } 
    int week=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7; 
    switch(week)
    {
                case 0: my_printf("Mon."); break;
                case 1: my_printf("Tue."); break;
                case 2: my_printf("Wed."); break;
                case 3: my_printf("Thu."); break;
                case 4: my_printf("Fri."); break;
                case 5: my_printf("Sat."); break;
                case 6: my_printf("Sun."); break;
   }
   return 0;
}