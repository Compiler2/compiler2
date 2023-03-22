#define NUM_ITER 6013

#include <header.h>

main_bench()
{
      int k,i,x;
      my_scanf("%d",&k);
      int h[k];
      int a[k];
      for(i=0;i<k;i++)
      {
                       my_scanf("%d",&h[i]);
      }
      for(x=0;x<k;x++)
      {
                      a[x]=1;
      }
      int c,d;
      for(c=k-2;c>=0;c--)
      {
                         for(d=c+1;d<k;d++)
                         {
                                          
                                           if((h[c]>=h[d])&&(a[d]>=a[c]))
                                           a[c]=a[d]+1;
                         }
      }
      int y=1;
      int m;
      for(m=0;m<k;m++)
      {
                      if(a[m]>y)
                      y=a[m];
      }
      my_printf("%d",y);

      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      getchar();
      
}
    