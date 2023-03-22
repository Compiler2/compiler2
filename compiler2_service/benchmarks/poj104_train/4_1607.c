#define NUM_ITER 30

#include <header.h>


main_bench()
{
      int n,lie,z;
      int i,j; 
      my_scanf("%d %d",&n,&lie);
      int *p[n];
      for(i=0;i<n;i++)
      {
         p[i]=(int *)malloc(lie*sizeof(int));
         for(j=0;j<lie;j++)
         {
                        my_scanf("%d",p[i]+j);
         }
      } 
      for(z=0;z<=n+lie-2;z++)
      {
                             for(i=0;i<n;i++)
                             {
                                             for(j=0;j<lie;j++)
                                             {
                                                               if(i+j==z)
                                                               my_printf("%d\n",*(p[i]+j));
                                             }
                             }
      }
      }
