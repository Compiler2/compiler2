#define NUM_ITER 47

#include <header.h>

main_bench()
{
  int a[100][100];
  int b[100][100];
  int x1,y1,x2,y2;
  int i,j,k;

  my_scanf("%d %d",&x1,&y1);
  for(i=0;i<x1;i++)
  for(j=0;j<y1;j++)
   {
     my_scanf("%d",&a[i][j]);
    }
  my_scanf("%d %d",&x2,&y2);

  for(i=0;i<x2;i++)
  for(j=0;j<y2;j++)
   {
    my_scanf("%d",&b[i][j]);
   }
  int c[x1][y2];
  for(i=0;i<x1;i++)
  for(j=0;j<y2;j++)
  c[i][j]=0;



  for(i=0;i<x1;i++)
  for(j=0;j<y2;j++)
  for(k=0;k<x2;k++)
   c[i][j]+=a[i][k]*b[k][j] ;

  k=0;
  for(i=0;i<x1;i++)
  for(j=0;j<y2;j++)
  {
      my_printf("%d",c[i][j]);
   k++;
   if(k%y2!=0)
    my_printf(" ");
   if(k%y2==0)
    my_printf("\n");
}
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
getchar();
}
