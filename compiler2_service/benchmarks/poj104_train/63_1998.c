#define NUM_ITER 65

#include <header.h>

int main_bench()
{
	int x1,x2,y1,y2,i,j,q,m;
	int a[100][100]={0},b[100][100]={0};
	my_scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
	 {for(j=0;j<y1;j++)
	   {my_scanf("%d",&a[i][j]);}}
    my_scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
	 {for(j=0;j<y2;j++)
	   {my_scanf("%d",&b[i][j]);} }
	for(i=0;i<x1;i++)
	 {for(j=0;j<y2;j++)
	  {m=0;
	  for(q=0;q<x2;q++)
	   {m=m+a[i][q]*b[q][j];  }    
	   if (j==0) my_printf("%d",m);
	   else my_printf(" %d",m);
	  }
	 my_printf("\n") ;
	 }	
} 