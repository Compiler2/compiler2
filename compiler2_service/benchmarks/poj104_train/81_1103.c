#define NUM_ITER 234883

#include <header.h>

int a[5][5];
int compare(int x,int y)
{
	if(x>4 ||y>4) return 0;
	else return 1;
}
int main_bench()
{
	int i,j,k,l,m,n;
	
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);
	my_scanf("%d%d",&m,&n);
	k=compare(m,n);
	if (k==0) my_printf("error\n");
	else
	{
		for(i=0;i<5;i++)
		{
			l=a[m][i];
			a[m][i]=a[n][i];
            a[n][i]=l;
		}
	
    for(i=0;i<5;i++)
	{
		my_printf("%d",a[i][0]);
		for(j=1;j<5;j++)
		{	
			my_printf(" %d",a[i][j]);
		}
		my_printf("\n");
	}}
	return 0;
}