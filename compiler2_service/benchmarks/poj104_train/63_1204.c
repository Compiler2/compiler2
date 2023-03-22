#include <header.h>

int c[1000][1000]={0};
int main_bench()
{   int i,j,k;
    int a[200][200];
 int b[200][200];
 int x1,y1,x2,y2;
 my_scanf("%d %d",&x1,&y1);
 for(i=0;i<x1;i++)
  for(j=0;j<y1;j++)
   my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
  for(j=0;j<y2;j++)
   my_scanf("%d",&b[i][j]);
  
        for(i=0;i<x1;i++)
   for(j=0;j<y2;j++)
     for(k=0;k<x2;k++)
   c[i][j] =c[i][j]+ a[i][k]*b[k][j];
            
			 for(i=0;i<x1;i++)
    {for(j=0;j<y2-1;j++)
    my_printf("%d ",c[i][j]);
    my_printf("%d\n",c[i][y2-1]);
    }
 return 0;
}