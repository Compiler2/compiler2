#define NUM_ITER 1670471

#include <header.h>

int main_bench()
{
  int b[200],i,j;
  char a[200];
  while(gets(a))
  {
    memset(b,0,sizeof(b));
    
    for(i=0;i<200;i++)
    {
      if(a[i]=='\0') break;
      if(a[i]=='(') b[i]=1;
      if(a[i]==')') 
      {
        b[i]=1;
        for(j=i;j>=0;j--)
          if(a[j]=='('&&b[j]==1)
          {
            b[i]=0;
            b[j]=0;
            break;
          }
      }
    }
    my_printf("%s\n",a);
    for(i=0;i<200;i++)
    {
    if(a[i]=='\0') break;
    if(a[i]=='('&& b[i]==1) my_printf("$");
    else
    if(a[i]==')'&&b[i]==1) my_printf("?");
    else my_printf(" ");
    
    }
    my_printf("\n");
    
  }
  return 0;
}
    
    
    
    
    
    
      