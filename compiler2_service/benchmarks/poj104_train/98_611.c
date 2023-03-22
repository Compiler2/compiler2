#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      int i;
      char a[10000][40];
      for (i=0;i<n;i++)
      {
          my_scanf("%s",a[i]);                   
      }
      int t,s=0;
      for (i=0;i<n;i++)
      {
         if(i==0)
         {
           t=strlen(a[i]);
           my_printf("%s",a[i]);                 
           s=s+t;
         }
         else
         {
           t=strlen(a[i]);
           s=s+t+1;
           if(s<=80)
           {
               my_printf(" %s",a[i]);                
           }
           else
           {
               my_printf("\n");
               my_printf("%s",a[i]);             
               s=t;                          
           }
         }
      }
      getchar();getchar();getchar();getchar();
}        
         