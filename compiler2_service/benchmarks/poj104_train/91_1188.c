#define NUM_ITER 1184242

#include <header.h>

int main_bench()
{ char a[100]={'\0'};
  int n=0,i=0,t=0;
  
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
   { if(i!=n-1)
    { t=a[i]+a[i+1];
      my_printf("%c",t);
               }
      else
      { t=a[0]+a[n-1];  
         my_printf("%c",t);}         
               
                  }
             
      return(0);
    
    
    }