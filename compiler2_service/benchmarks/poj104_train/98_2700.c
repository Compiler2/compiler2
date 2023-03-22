#define NUM_ITER 33558

#include <header.h>

main_bench()
{
      int n,c=0,f=1;
      my_scanf("%d",&n);
      char  p[1000][41];  
      for(int i=0;i<n;i++)
      { 
              my_scanf("%s",p[i]); 
      }
      for(int j=0;j<n;j++)
      { 
                   c=c+strlen(p[j]);
                   if(c<=80)
                   {
                            if(f==1)
                            {
                              my_printf("%s",p[j]); 
                              f=0;
                              } 
                              else
                              my_printf(" %s",p[j]);
                          c++; 
                   }
                   else
                   {
                       my_printf("\n");
                       f=1;
                       c=0;
                       j--;
                   } 
      }
      getchar();
      getchar();
}
