#define NUM_ITER 28

#include <header.h>

main_bench()
{
      int x1,x2,y1,y2,i,j,k,l;
      my_scanf("%d %d",&x1,&y1);
      int *a=(int*)malloc((x1*y1)*sizeof(int));
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y1;j++)
                       my_scanf("%d",&a[i*y1+j]);
      }
      my_scanf("%d %d",&x2,&y2);
      int *b=(int*)malloc((x2*y2)*sizeof(int));
      for(k=0;k<x2;k++)
      {
                       for(l=0;l<y2;l++)
                       my_scanf("%d",&b[k*y2+l]);
      }
      int *c=(int*)malloc((x1*y2)*sizeof(int));
      
      
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<=y2;j++)
                       {
                       c[i*y2+j]=0;
                       for(k=0;k<y1;k++)
                       c[i*y2+j]=c[i*y2+j]+a[i*y1+k]*b[k*y2+j];
                       }
      }             
      for(i=0;i<x1;i++)
      {
                       for(j=0;j<y2-1;j++)
                       {
                                        my_printf("%d ",c[i*y2+j]);
                       }
                       my_printf("%d",c[i*y2+j]);
                       my_printf("\n");
      }
      
}         
                       
                       
