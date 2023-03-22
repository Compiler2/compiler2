#include <header.h>

int main_bench()
{
  char a[100],b[100];
  int i,len;
  gets(a);
  gets(b);
  len=strlen(a);
  for(i=0;i<len;i++)
  {
    if(a[i]>='a'&&a[i]<='z')
      a[i]-=32;
    if(b[i]>='a'&&b[i]<='z')
      b[i]-=32;
  
    if (a[i]>b[i])
    {    
         my_printf(">");
         break;
    }    
     
    else
    if(a[i]<b[i])
    {
        my_printf("<");
       break;
     }
  }      
  if(i>=len)
    my_printf("=");
}