#define NUM_ITER 748579

#include <header.h>

int dayfr(int m,int d)
{
int t;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
t=a[m-1]-d;
for (m=m+1;m<=12;m++)
{
t=t+a[m-1];
}
return (t);
}
int dayr(int m,int d)
{
int t;
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
t=a[m-1]-d;
for (m=m+1;m<=12;m++)
{
t=t+a[m-1];
}
return (t);
}
int main_bench()
{
 int y1,m1,d1,y2,m2,d2,year,t;
 my_scanf ("%d%d%d",&y1,&m1,&d1);
 my_scanf ("%d%d%d",&y2,&m2,&d2);
 year=y1;
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  t=dayr(m1,d1);
  else t=dayfr(m1,d1);
 for (year=y1+1;year<=y2;year++)
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
   t=t+dayr(1,1)+1;
  else t=t+dayfr(1,1)+1;
  year=y2;
 if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
  t=t-dayr(m2,d2);
  else t=t-dayfr(m2,d2); 
 my_printf ("%d",t);
}