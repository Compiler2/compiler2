#define NUM_ITER 215626

#include <header.h>

int main_bench()
{
	int change(int x,int y);
	int m,n,i,j,c,b[5],a[5][5],k;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	c=change(m,n);
	if(c==0)
		my_printf("error\n");
	if(c==1)
	{
		for(k=0;k<5;k++)
		{
			b[k]=a[m][k];
			a[m][k]=a[n][k];
			a[n][k]=b[k];
		}
		for(i=0;i<5;i++)
		{
			my_printf("%d %d %d %d %d\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4]);
		}
	}
}
int change(int x,int y)
{
	int z;
	if(x>4||y>4)
		z=0;
	else
		z=1;
	return(z);
}