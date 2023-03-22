#include <header.h>


main_bench()
{
 int w,t,i, s;
 my_scanf("%d", &w);
 int month[12]={12, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
 s=0;
 for (i=1; i<=12; i++)
 {
  
  s=s+month[i-1];

  t=w+s;
  if (t%7==5)
  {
     
     my_printf("%d\n", i);
  } 
 }
}
