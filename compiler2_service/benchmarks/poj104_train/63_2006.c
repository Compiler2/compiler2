#define NUM_ITER 50

#include <header.h>

int main_bench()
{
 int x1,y1,x2,y2,i,r,m,a[100][100],b[100][100],c[100][100];
 my_scanf("%d%d",&x1,&y1);
 for(i=0;i<x1;i++)
 {
  for(r=0;r<y1;r++)
  my_scanf("%d",&a[i][r]);
 }
 my_scanf("%d%d",&x2,&y2);
 for(i=0;i<x2;i++)
 {
  for(r=0;r<y2;r++)
  my_scanf("%d",&b[i][r]);
 }
 for(i=0;i<x1;i++)
 {
  for(r=0;r<y2;r++)
  {
  	c[i][r]=0;
  	for(m=0;m<x2;m++)
  	{
  	 c[i][r]+=a[i][m]*b[m][r];
  	}
  }
 }
 for(i=0;i<x1;i++)
 {
 	for(r=0;r<y2;r++)
 	{
 	 if(r==y2-1)
 	 my_printf("%d\n",c[i][r]);
 	 else
 	 my_printf("%d ",c[i][r]);
 	}
 }
 return 0;
}