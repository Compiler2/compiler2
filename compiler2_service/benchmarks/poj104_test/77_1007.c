#include <header.h>

int main_bench()
{
  int  i,j,k;
  char s[102];
  gets(s);
   for(i=1;i<strlen(s);i++)
     {
       if(s[i]!=s[0])
           {
             for(j=i-1;j>=0;j--)
               {
                 if(s[j]!=s[i])
                    {
                      s[j]=s[i];
                      my_printf("%d %d\n",j,i);
                       break;
                     }
                }
             } 
       }
return 0;
}