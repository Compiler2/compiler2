#define NUM_ITER 191382

#include <header.h>

main_bench()
{
      int a[5][5];
      int i,j,k;
      for(i=0;i<5;i++)
      for(j=0;j<5;j++)
      my_scanf("%d",&a[i][j]);
      int max,maxj,flag;
      for(i=0;i<5;i++)
      {
                      max=a[i][0];
                      maxj=0;
                      for(j=0;j<5;j++)
                      {
                                      if(a[i][j]>max)
                                      {
                                                     max=a[i][j];
                                                     maxj=j;
                                      }
                      }
                      flag=1;
                      for(k=0;k<5;k++)
                      if(max>a[k][maxj])
                      {
                                        flag=0;
                                        continue;
                      }
                      if(flag)
                      {
                              my_printf("%d %d %d",i+1,maxj+1,max);
                              break;
                      }
      }
      if(flag==0)
      my_printf("not found\n");
      getchar();
      getchar();
      }