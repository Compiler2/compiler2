#include <header.h>

int main_bench()
{ int t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,w;
  my_scanf("%d",&w);
  if ((12%7+w)%7==5) my_printf("1\n");
  
  t2=(31%7+w)%7;
  if ((12%7+t2)%7==5) my_printf ("2\n");
  
  t3=(28%7+t2)%7;
  if ((12%7+t3)%7==5) my_printf ("3\n");
  
  t4=(31%7+t3)%7;
  if ((12%7+t4)%7==5) my_printf ("4\n");
  
  t5=(30%7+t4)%7;
  if ((12%7+t5)%7==5) my_printf ("5\n");
  
  t6=(31%7+t5)%7;
  if ((12%7+t6)%7==5) my_printf ("6\n");
  
  t7=(30%7+t6)%7;
  if ((12%7+t7)%7==5) my_printf ("7\n");
  
  t8=(31%7+t7)%7;
  if ((12%7+t8)%7==5) my_printf ("8\n");
  
  t9=(31%7+t8)%7;
  if ((12%7+t9)%7==5) my_printf ("9\n");
  
  t10=(30%7+t9)%7;
  if ((12%7+t10)%7==5) my_printf ("10\n");
 
  t11=(31%7+t10)%7;
  if ((12%7+t11)%7==5) my_printf ("11\n");
  
  t12=(30%7+t11)%7;
  if ((12%7+t12)%7==5) my_printf ("12\n");
  
  
  return 0;

}