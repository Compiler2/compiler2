#define NUM_ITER 573

#include <header.h>

 
int main_bench()
{
  int row,col;
  int sz[100][100];
  int k,i,j;
  int a,b,c,d;
 
  my_scanf("%d %d",&row,&col);
 
  for(k=0;k<row;k++)
  {
    for(i=0;i<col;i++)
 {
   my_scanf("%d",&sz[k][i]);
 }
  }
 
  a=0;
  b=col-1;
  c=row-1;
  d=0;
 
  while(a<c&&d<b)
  {
    for(i=d; i<b; i++)
  my_printf("%d\n",sz[a][i]);
 for(j=a; j<c; j++)
  my_printf("%d\n",sz[j][b]);
 for(i=b; i>d; i--)
  my_printf("%d\n",sz[c][i]);
 for(j=c; j>a; j--)
  my_printf("%d\n",sz[j][d]);
 a++;
 b--;
 c--;
 d++;
  }
  
if(a==c && b==d)
{
 my_printf("%d\n",sz[a][b]);
}
  if(b==d && a!=c)
  {
    for(i=a; i<=c; i++)
  my_printf("%d\n",sz[i][b]);
  }
  if(a==c && b!=d)
  {
    for(i=d; i<=b; i++)
  my_printf("%d\n",sz[a][i]);
  }
  return 0;
}