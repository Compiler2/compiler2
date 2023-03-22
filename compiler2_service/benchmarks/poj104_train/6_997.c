#define NUM_ITER 26

#include <header.h>


int main_bench()
{
    int n,j,i,k,m,a,t,all,sum;
    int s[500][500];
    my_scanf("%d",&all);m=0;
    for (t=0;t<all;t++)
    { 
    my_scanf("%d %d",&m,&n);
    sum=0;
     for (i=0;i<m;i++)
      for (j=0;j<n;j++)
      {
      my_scanf("%d",&s[i][j]);
      sum+=s[i][j];
      }
      if ((m==1)||(n==1)) my_printf("%d\n", sum);
      else
      {
      for (i=1;i<=m-2;i++)
      for (j=1;j<=n-2;j++)
      sum=sum-s[i][j];
      my_printf("%d\n",sum);
      }
      }  
         
                 return 0;
                 }
                
