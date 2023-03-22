#include <header.h>

int main_bench()
{
  char a[100][100],b[100],c[100],t;
  int i,j;
  for(i=0;i<=100;i++)
  {
    my_scanf("%s",a[i]); 
    t=getchar();
    if(t!=' ')
    {
      j=i;
      break;
    }             
  }
  gets(b);
  gets(c);  
  if(strcmp(a[0],b)==0) my_printf("%s",c);
     else my_printf("%s",a[0]);             
  for(i=1;i<=j;i++)
   {
     if(strcmp(a[i],b)==0)my_printf(" %s",c);
     else my_printf(" %s",a[i]);                  
   }

  return 0;
}

  
