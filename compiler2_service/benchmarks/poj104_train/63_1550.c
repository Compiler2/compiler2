#define NUM_ITER 44

#include <header.h>

int main_bench()
{
int x1,x2,y1,y2,i,j,k,l,m,n,o,p,q;
my_scanf("%d %d",&x1,&y1);
int a[x1][y1];
for(i=0;i<x1;i++)
{for(j=0;j<y1;j++)
{my_scanf("%d",&a[i][j]);}}
my_scanf("%d %d",&x2,&y2);
int b[x2][y2];
for(i=0;i<x2;i++)
{for(j=0;j<y2;j++)
{my_scanf("%d",&b[i][j]);}}
int c[x1][y2];
for(i=0;i<x1;i++)
{
 c[i][0]=0;
 for(q=0;q<x2;q++)
 {
 c[i][0]=c[i][0]+a[i][q]*b[q][0];
 }
 my_printf("%d",c[i][0]);
 for(j=1;j<y2;j++)
 {
 c[i][j]=0;
 for(q=0;q<x2;q++)
  {
  c[i][j]=c[i][j]+a[i][q]*b[q][j];
  }
  my_printf(" %d",c[i][j]);
 }
 my_printf("\n");
}
} 
