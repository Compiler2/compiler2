#include <header.h>

int main_bench()
{
	int i,j,x1,y1,x2,y2,x,m=0,k;
	my_scanf("%d %d",&x1,&y1);
	int *a;
	a=(int *)malloc(x1*y1*sizeof(int));
    memset(a,0,sizeof(int)*x1*y1);
	for(i=0;i<x1;i++)
		for(j=0;j<y1;j++)
		  my_scanf("%d",&a[i*y1+j]);
    my_scanf("%d %d",&x2,&y2);
	int *b;
	b=(int *)malloc(x2*y2*sizeof(int));
     memset(b,0,sizeof(int)*x2*y2);
	for(i=0;i<x2;i++)
		for(j=0;j<y2;j++)
		  my_scanf("%d",&b[i*y2+j]);
	int *c;
	c=(int *)malloc(x1*y2*sizeof(int));
	memset(c,0,sizeof(int)*x1*y2);
    x=y1>x2?x2:y1;
    for(i=0;i<x1;i++)
		for(j=0;j<y2;j++)
			for(k=0;k<x;k++)
			c[i*y2+j]=c[i*y2+j]+a[i*y1+k]*b[k*y2+j];
	for(i=0;i<x1*y2;i++)
		{
		if(m==(y2-1))
		{
			m=0;
			my_printf("%d\n",c[i]);
		}
		else 
		{
			my_printf("%d ",c[i]);
			m++;
		}
	}
    
}