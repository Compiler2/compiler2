#include <header.h>

int main_bench()
{
	int a[100][100],b[100][100];
	int c[100][100]={0
	};
	int x1,y1,x2,y2,i,j;
	my_scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
	{ for(j=0;j<y1;j++)
	   my_scanf("%d",&a[i][j]);
	}
	my_scanf("%d %d",&x2,&y2);
	for(i=0;i<x2;i++)
    { for(j=0;j<y2;j++)
     my_scanf("%d",&b[i][j]);
    } 
    int m=x1,n=y2,temp;
    for(i=0;i<m;i++)
    { for(j=0;j<n;j++)
      {
      	for(temp=0;temp<y1;temp++)
      	c[i][j]+=a[i][temp]*b[temp][j];
      }
    }
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n-1;j++)
    	{
	    	my_printf("%d ",c[i][j]);
	    }
	    my_printf("%d",c[i][n-1]);
	    my_printf("\n");
    }
    return 0;
}