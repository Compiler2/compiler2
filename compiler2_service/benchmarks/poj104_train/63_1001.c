#define NUM_ITER 51

#include <header.h>

main_bench()
{
      int x,y,z,i,j,k;
      int a[100][100]={0},b[100][100]={0},c[100][100]={0};
      my_scanf("%d %d",&x,&y);
      for(i=0;i<x;i++)
      {
         for(j=0;j<y;j++)
         my_scanf("%d",&a[i][j]);
      }
      my_scanf("%d %d",&y,&z);
      for(i=0;i<y;i++)
      {
         for(j=0;j<z;j++)
         my_scanf("%d",&b[i][j]);
      }
      for(i=0;i<x;i++)
         for(j=0;j<z;j++)
            for(k=0;k<y;k++)
              c[i][j]+=a[i][k]*b[k][j];
      for(i=0;i<x;i++)
      {
         my_printf("%d",c[i][0]);             
         for(j=1;j<z;j++)
         my_printf(" %d",c[i][j]);
         my_printf("\n");
      }
      getchar();getchar();
      }
         
      
