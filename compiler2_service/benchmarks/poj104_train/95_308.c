#define NUM_ITER 973445

#include <header.h>


int main_bench()
{
  char a[80],b[80];
  int c,i;
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]>(char)64&&a[i]<(char)91)
     {a[i]=(char)a[i]+32;}
  }
  for(i=0;b[i]!='\0';i++)
  {
     if(b[i]>(char)64&&b[i]<(char)91)
     {b[i]=(char)b[i]+32;}
  }
  c=strcmp(a,b);
  if(c>0)my_printf(">\n");
  else if(c==0)my_printf("=\n");
  else if(c<0)my_printf("<\n");
  return 0;
}