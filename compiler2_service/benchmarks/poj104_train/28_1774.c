#include <header.h>

int main_bench()
{
  int i,k=0;
  char a[9999]={'\0'};
  gets(a);
  for(i=0;i<9999;i++)
    {if(a[i]==' '||a[i]=='\0')
      {my_printf("%d",i);
       k=i;
       break;}
    }
  if(a[i]==' ')
  {for(i=k+1;i<9999;i++)
   {if(a[i]=='\0')
    {my_printf(",%d",i-k-1);
     break;}
   
    if(a[i]==' '&&a[i-1]!=' ')
     {
      my_printf(",%d",i-k-1);
      k=i;} 
      if(a[i]==a[i+1]&&a[i]==' ')
       k=k+1;
    } }  	
  return 0;
}
