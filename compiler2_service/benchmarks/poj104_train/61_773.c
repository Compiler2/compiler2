#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      int fb[29];
      fb[1]=1;
      fb[2]=1;
      int i;
      for(i=3;i<22;i++)
      {
          fb[i]=fb[i-1]+fb[i-2];
      }
      
      
      for(;n>0;n--)
      {
          int a;
          my_scanf("%d", &a);
          my_printf("%d\n",fb[a]);         
      }
}
