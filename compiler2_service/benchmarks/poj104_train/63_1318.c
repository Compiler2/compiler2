#define NUM_ITER 50

#include <header.h>

int main_bench()
{
  int a[100][100],b[100][100],c[100][100],m,n,p,i,j,k;
  my_scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
   for(j=0;j<n;j++)
    my_scanf("%d",&a[i][j]);
  my_scanf("%d%d",&n,&p);
  for(i=0;i<n;i++)
   for(j=0;j<p;j++)
    my_scanf("%d",&b[i][j]);
  for(i=0;i<100;i++)
   for(j=0;j<100;j++)
    c[i][j]=0;
  for(i=0;i<m;i++)
    for(j=0;j<p;j++)
      for(k=0;k<n;k++)
        c[i][j]+=a[i][k]*b[k][j];
  for(i=0;i<m;i++)
   for(j=0;j<p;j++)
    my_printf("%d%c",c[i][j],(j==(p-1)?'\n':' '));
  my_scanf("%d",&i);
  return 0;
}  
