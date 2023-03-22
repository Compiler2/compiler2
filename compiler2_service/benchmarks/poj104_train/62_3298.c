#define NUM_ITER 1509911

#include <header.h>

main_bench()
{
 int space=1,i=-1;
 char a[80];
 gets(a);
 
 while(a[++i]!='\0')
 {
  if(a[i]==' ') space=0;
  else 
  {
   if(space==0)   
   { space=1;my_printf(" ");}
      my_printf("%c",a[i]);
  }
 }
}