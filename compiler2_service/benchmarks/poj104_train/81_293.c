#define NUM_ITER 228817

#include <header.h>


int main_bench()
{
	int a[5][5],b,m,n,change(int m,int n),i,j;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	my_scanf("%d",&a[i][j]);
	my_scanf("%d %d",&m,&n);
	if(change(m,n)==0)
	my_printf("error");
	if(change(m,n)==1)
	{for(i=0;i<5;i++)
	{b=a[m][i];
	a[m][i]=a[n][i];
	a[n][i]=b;}
	
		for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		{my_printf("%d%c",a[i][j],(j!=4)?' ':'\n');
		}}
	
}
int change(int m,int n)
{
	int y;
	if(m>4||n>4)
	y=0;
	if(m>=0&&m<=4&&n>=0&&n<=4)
	y=1;
	return(y);
}
	
    