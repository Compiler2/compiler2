#include <header.h>

int main_bench()
{
	int x1,y1,x2,y2;
	int a[100][100],b[100][100],c[100][100];
	int i,j,k,h;
	my_scanf("%d %d",&x1,&y1);
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&x2,&y2);
	for(k=0;k<x2;k++)
			for(h=0;h<y2;h++)
				my_scanf("%d",&b[k][h]);
	for(i=0;i<x1;i++)
		for(h=0;h<y2;h++)
			{c[i][h]=a[i][0]*b[0][h];
	        for(j=1;j<x2;j++) c[i][h]+=a[i][j]*b[j][h];}
	for(i=0;i<x1;i++)
	{
		for(h=0;h<y2-1;h++)
			{my_printf("%d ",c[i][h]);}
		my_printf("%d\n",c[i][y2-1]);
	}
	return 0;
}