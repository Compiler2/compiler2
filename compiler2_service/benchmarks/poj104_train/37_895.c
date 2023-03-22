#define NUM_ITER 5

#include <header.h>

main_bench()
{
      int t,m,j,b[100001],k;
      my_scanf("%d\n",&t);
      for(j=0;j<100000;j++)
         b[j]=1;
      char str[100001];
      for(int i=0;i<t;i++)
      {
               for(j=0;;j++)
               {
                       my_scanf("%c",&str[j]);
                       if(str[j]=='\n') 
                       break;
               }
               m=j;
               for(j=0;j<m-1;j++)
               {
                  for(k=j+1;k<m;k++)
                  {
                        if(str[j]==str[k])
                        {
                              b[j]=0;
                              b[k]=0;
                        }
                  }
               }          
               for(j=0;j<m;j++)
               {
                   if(b[j]==1)
                   {
                              my_printf("%c\n",str[j]);
                              break;
                   }
               }
               if(j==m)
               my_printf("no\n");
               for(j=0;j<100000;j++)
                  b[j]=1;
      }                 
}