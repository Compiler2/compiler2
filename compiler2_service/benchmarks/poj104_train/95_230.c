#define NUM_ITER 1048353

#include <header.h>

int main_bench()
{
  int i,j=0;
  char a[80]="",b[80]="";
  gets(a);
  gets(b);
  for(i=0;i<79;i++)
  {
     if((a[i]-b[i])!=0&&(a[i]-b[i])!=32&&(b[i]-a[i])!=32) 
     {
       j=1;
       if(a[i]<123&&a[i]>96&&b[i]<123&&b[i]>96&&a[i]>b[i])my_printf(">");
       if(a[i]<123&&a[i]>96&&b[i]<123&&b[i]>96&&a[i]<b[i])my_printf("<");
       if(a[i]<123&&a[i]>96&&b[i]<91&&b[i]>64&&a[i]>b[i]+32)my_printf(">");
       if(a[i]<123&&a[i]>96&&b[i]<91&&b[i]>64&&a[i]<b[i]+32)my_printf("<");
       if(a[i]<91&&a[i]>64&&b[i]<123&&b[i]>96&&a[i]>b[i]-32)my_printf(">");
       if(a[i]<91&&a[i]>64&&b[i]<123&&b[i]>96&&a[i]<b[i]-32)my_printf("<");
       if(a[i]<91&&a[i]>64&&b[i]<91&&b[i]>64&&a[i]>b[i])my_printf(">");
       if(a[i]<91&&a[i]>64&&b[i]<91&&b[i]>64&&a[i]<b[i])my_printf("<");
       break;
     } 
  }
  if(j==0)
  my_printf("=");

  return 0;
}
