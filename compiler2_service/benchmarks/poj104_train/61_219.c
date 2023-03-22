#define NUM_ITER 1

#include <header.h>

main_bench()
{
      int a,i,j,n,f[30];
      f[0]=1;f[1]=1;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      for(j=2;j<30;j++)f[j]=0;
                      my_scanf("%d",&a);
                      if(a<=2)my_printf("1\n");
                      else
                      {
                          for(j=2;j<a;j++)
                          {
                                          f[j]=f[j-1]+f[j-2];
                          }
                          my_printf("%d\n",f[a-1]);
                      }
      }
}
 