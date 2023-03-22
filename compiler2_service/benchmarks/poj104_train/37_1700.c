#define NUM_ITER 27301

#include <header.h>

main_bench()
{
      int t,i,b,j,k,m;
      m=0;
      char a[100001];
      my_scanf("%d",&t);
      for(i=1;i<=t;i++)
      {
          my_scanf("%s",a);
          b=strlen(a);
          for(j=0;j<=b-1;j++)
           {
                            
                for(k=0;k<=b-1;k++)
                  {
                      if(a[j]!=a[k])
                      m=m+1;
                      
                      
                      
                  }
                  
                if(m==b-1&&i!=t)
                  {
                     my_printf("%c\n",a[j]);
                     break;
                  }
                else if (m==b-1&&i==t)
                  {
                     my_printf("%c",a[j]);
                     break;
                  }
                  m=0;
                
               
                
           }
           if(j==b&&i!=t)
           my_printf("no\n");
           if(j==b&&i==t)
           my_printf("no");
           m=0;
      }
      }             