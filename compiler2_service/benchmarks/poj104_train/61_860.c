#include <header.h>

main_bench()
{
      int n,i,a,j;
      my_scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      my_scanf("%d",&a);
                      int b[20]={0};
                      b[0]=1;
                      b[1]=1;
                      if(a<=2)
                      {
                                    my_printf("%d\n",b[a-1]);
                      }
                      else
                      {
                          for(j=2;j<a;j++)
                          {
                                          b[j]=b[j-1]+b[j-2];
                          }
                          my_printf("%d\n",b[a-1]);
                      }
      }                
      getchar();                
      getchar();                
      
}
