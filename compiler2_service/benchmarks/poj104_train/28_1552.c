#define NUM_ITER 1141588

#include <header.h>

int main_bench()
{
  char s[2000],a[200][200];
       int n=0,i,m=0,c[200]; 
       gets(s);
       for(i=0;i<strlen(s)+1;i++)
       {
              if(s[i]==' '||s[i]=='\0') 
              {
                     a[m][n]='\0';
                     n=0;
                     m++;
              }
              else
              {
                     a[m][n]=s[i];
                     n++;
              }
       }
       for(i=0;i<m;i++)
       {
              c[i]=strlen(a[i]);
       }
       for(i=0;i<m-1;i++)
       {
     if(c[i]!=0)
     {
      my_printf("%d",c[i]);
              my_printf(",");
     }
     else
     {
     continue;
     }
       }
       my_printf("%d",c[m-1]);
       return 0;
}
