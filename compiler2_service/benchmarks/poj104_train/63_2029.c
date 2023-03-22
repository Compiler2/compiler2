#define NUM_ITER 31

#include <header.h>

int main_bench()
{
	int a[100][100]={{0},{0}};
	int b[100][100]={{0},{0}};
	int c[100][100]={{0},{0}};
	int x1,y1,x2,y2;
	my_scanf("%d %d",&x1,&y1);
	for(int i=0;i<x1;i++)
	    for(int j=0;j<y1;j++)
	        my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&x2,&y2);
	for(int i=0;i<x2;i++)
	    for(int j=0;j<y2;j++)
	        my_scanf("%d",&b[i][j]);
	for(int i=0;i<x1;i++)
	    for(int j=0;j<y2;j++)
	        for(int h=0;h<y1;h++)
	            c[i][j]+=a[i][h]*b[h][j];
	for(int i=0;i<x1;i++)
	    {
		my_printf("%d",c[i][0]);
		for(int j=1;j<y2;j++)
		    my_printf(" %d",c[i][j]);
		my_printf("\n");	
		}
} 