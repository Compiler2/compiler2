#include <header.h>


int main_bench()
{ 
    char str[200];
     int i,n;
    gets(str);
   
    n=strlen(str);
     for(i=0;i<n;i++)
      {
                    if((str[i])!=' ')
                    {
                                my_printf("%c",str[i]);
                                }
                    else if((str[i])==' ')
                    {
                         if((str[i+1])==' ')
                         continue;
                         else if((str[i+1])!=' ')
                         {
                              my_printf("%c",str[i]);
                              }
                         }
                    
                    }
    
 
   return 0;
   }

