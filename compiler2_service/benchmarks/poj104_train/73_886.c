#define NUM_ITER 183889

#include <header.h>

int a[6][6];
int max(int hang)
{
    int m=0,ji;
    for(int k=1;k<=5;k++)
    {
        if(a[hang][k]>m) {m=a[hang][k]; ji=k;}
    }
    return ji;
}
int min(int lie)
{
    int m=a[1][lie],ji=1;
    for(int k=2;k<=5;k++)
    {
        if(a[k][lie]<m) {m=a[k][lie]; ji=k;}
    }
    return ji;
}

main_bench()
{
      int i,j,x=0;
      for(i=1;i<=5;i++)
      {
          for(j=1;j<=5;j++)
          {
              
              my_scanf("%d",&a[i][j]);
          }
          
      }
      for(i=1;i<=5;i++)
      {
          j=max(i);
          if( min(j)==i ) {my_printf("%d %d %d\n",i,j,a[i][j]);x=1;}
      }
      if(x==0) my_printf("not found\n");
}