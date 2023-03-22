#include <header.h>

int com(void const *a,void const *b)
{
    return (*(int *)a-*(int *)b);
}
main_bench()
{
      int k,H;
      int j,count[25],n;
      my_scanf("%d",&k);
      int h[25],i;
      for (i=0;i<k;i++)
      {
          my_scanf("%d",&h[i]);
      }
      count[k-1]=1;
      for (i=k-2;i>=0;i--)
      {
          n=0;
          for (j=k-1;j>=i+1;j--)
          {
             if  (h[j]<=h[i])
             {
                  if (count[j]>=n)
                  {
                       n=count[j];
                  }
             }
          }
          count[i]=n+1;
      }

           qsort(count,k,sizeof(int),com);
           my_printf("%d",count[k-1]);
      getchar();getchar();getchar();getchar();getchar();getchar();
}
