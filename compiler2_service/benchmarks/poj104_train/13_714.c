#include <header.h>

main_bench()
{
      int n;
      my_scanf("%d",&n);
      int s[20000],y[20000];
      int i,j,k;
      for(i=0;i<n;i++)
      {
                      my_scanf("%d",&s[i]);
      }
      k=0;
      for(i=n-1;i>0;i--)
      {
                      for(j=i-1;j>=0;j--)
                      {
                                         if(s[i]==s[j])
                                                break;
                      }
                      if(j==-1)
                      {
                               y[k]=s[i];
                               k++;
                      }
      }
      my_printf("%d",s[0]);
      for(i=k-1;i>=0;i--)
            my_printf(" %d",y[i]);
}
