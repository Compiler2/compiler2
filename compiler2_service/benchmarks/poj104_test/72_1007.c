#define NUM_ITER 778

#include <header.h>

int main_bench()
{
   int n,m,j,i,jz[20][20];
   my_scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         my_scanf("%d",&jz[i][j]);
      }
   }
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         if(i==0&&j==0)
         {
             if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j])
             {
                 my_printf("%d %d\n",i,j);
             }
         }
         if(i==0&&j!=0&&j!=n-1)
         {
             if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i][j+1])
                {
                  my_printf("%d %d\n",i,j);
                }
         }
         if(i==0&&j==n-1)
         {
             if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j])
             {
                  my_printf("%d %d\n",i,j) ;
             }
         }
         if(i!=0&&i!=m-1&&j==0)
         {
             if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i-1][j])
             {
                   my_printf("%d %d\n",i,j);
             }
         }
         if(i!=0&&i!=m-1&&j!=0&&j!=n-1)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i-1][j])
              {
                   my_printf("%d %d\n",i,j);
              }
         }
         if(i!=0&&i!=m-1&&j==n-1)
         {
              if(jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i+1][j]&&jz[i][j]>=jz[i-1][j])
              {
                   my_printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j==0)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i-1][j])
              {
               my_printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j!=0&&j!=n-1)
         {
              if(jz[i][j]>=jz[i][j+1]&&jz[i][j]>=jz[i][j-1]&&jz[i][j]>=jz[i-1][j])
              {
                   my_printf("%d %d\n",i,j);
              }
         }
         if(i==m-1&&j==n-1)
         {
              if(jz[i][j]>=jz[i-1][j]&&jz[i][j]>=jz[i][j-1])
              {
                   my_printf("%d %d\n",i,j);
              }
         }
      }
   }	
  return 0;
}