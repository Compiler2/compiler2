#define NUM_ITER 201138

#include <header.h>

main_bench()
{
      int a[5][5];
      int i,j,l;
      for(i=0;i<5;i++)
      for(j=0;j<5;j++)
      my_scanf("%d",&a[i][j]);
      int count=0,max=0,min=0,temp;
      for(i=0;i<5;i++)
      {
              max=0;
              min=0;
              for(j=0;j<5;j++)
              {
                      if(a[i][j]>max)
                      {
                                     max=a[i][j];
                                     temp=j;
                      }
              }
              for(l=0;l<5;l++)
              {
                      if(a[i][temp]>a[l][temp]) break;
              }
              if(l==5) 
              {
                       my_printf("%d %d %d\n",i+1,temp+1,a[i][temp]);
                       count++;
              }
      }
      if(count==0) my_printf("not found\n");
}