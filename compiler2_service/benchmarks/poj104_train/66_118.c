#define NUM_ITER 1277496

#include <header.h>

int main_bench()
{
 unsigned long y,w;
 int m,d;
 my_scanf("%ld %d %d",&y,&m,&d);
 if(m==1) {m=13;y=y-1;}
 if(m==2) {m=14;y=y-1;}
 w=(d+2*m+3*(m+1)/5+y+y/4-y/100+y/400+1)%7;
 switch(w)
 {
  case 1: my_printf("Mon.");break;
  case 2: my_printf("Tue.");break;
  case 3: my_printf("Wed.");break;
  case 4: my_printf("Thu.");break;
  case 5: my_printf("Fri.");break;
  case 6: my_printf("Sat.");break;
  case 0: my_printf("Sun.");break;
 }
 if(w>6||w<0) my_printf("%d",w);
}