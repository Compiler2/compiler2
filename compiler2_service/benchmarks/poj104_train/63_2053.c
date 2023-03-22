#define NUM_ITER 45

#include <header.h>

main_bench()
{
      int m,q,n;
      
      
      my_scanf("%d %d",&m,&q);
      
      int **a;
      a=(int **)malloc(m*sizeof(int *));
      for (int i=0;i<m;i++)
      a[i]=(int *)malloc(q*sizeof(int));
      
      for (int i=0;i<m;i++)
      for (int j=0;j<q;j++)
      my_scanf("%d",&a[i][j]);
      
      
      my_scanf("%d %d",&q,&n);
      
      int **b;
      b=(int **)malloc(q*sizeof(int *));
      for (int i=0;i<q;i++)
      b[i]=(int *)malloc(n*sizeof(int));
      
      for (int i=0;i<q;i++)
      for (int j=0;j<n;j++)
      my_scanf("%d",&b[i][j]);
      
      
      int **c;
      c=(int **)malloc(m*sizeof(int *));
      for (int i=0;i<m;i++)
      c[i]=(int *)malloc(n*sizeof(int));
      
      
      
      for(int i=0;i<m;i++)
         for(int j=0;j<n;j++)
            for(int k=0;k<q;k++) c[i][j]=c[i][j]+a[i][k]*b[k][j];
      
      
      int i,j;
      for(i=0;i<m;i++)
      {
         for(j=0;j<n-1;j++) my_printf("%d ",c[i][j]);
         my_printf("%d\n",c[i][j]);
      }  

}