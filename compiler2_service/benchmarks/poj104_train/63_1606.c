#define NUM_ITER 31

#include <header.h>

void  stubid(int x,int y,int z[150][150])
{
  for (int i=0;i<x;i++)
  {
    for (int j=0;j<y;j++)
       my_scanf ("%d",&z[i][j]); 
   }
}
int main_bench()
{
  int a[150][150],b[150][150];
  int m,n,p,q,i,j,k;
  int z;
  my_scanf ("%d %d",&m,&n);
  stubid (m,n,a);
  my_scanf ("%d %d",&q,&p);
  stubid (n,p,b);
  for (i=0;i<m;i++)
   {
     for (j=0;j<p;j++)
      {
         z=0;
         for (k=0;k<n;k++)
            z=z+a[i][k]*b[k][j];
         if (j<p-1)
            my_printf ("%d ",z);
         else if (j==p-1&&i<m-1)
            my_printf ("%d\n",z);
         else
            my_printf ("%d",z);
       }
     }
    return 0;
} 