#include <header.h>

int main_bench()
{
 int a=0,i,x;
 char c[10000];
 gets(c);
 for(i=0;c[i]!='\0';i++)
 {
  if(c[i]!=' '){a=a+1;x=1;}
  else 
  {
   if(x==1)
	  { if(c[i]==' ')
   {my_printf("%d,",a);x=0;};
	   a=0;}
      }
}my_printf("%d",a);
}
