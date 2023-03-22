#include <header.h>

int main_bench()
{
	int f(int x,int y);
	int a[5][5],i,j,b[5],m,n;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&a[i][j]);}
	my_scanf("%d %d",&m,&n);
	if (f(m,n)==0)
		my_printf("error");
	else if (f(m,n)==1)
	{
		for(j=0;j<5;j++)
		{
			b[j]=a[n][j];
			a[n][j]=a[m][j];
			a[m][j]=b[j];}
		for(i=0;i<5;i++)
		{
			my_printf("\n");
			for(j=0;j<4;j++)
			    my_printf("%d ",a[i][j]);
            my_printf("%d",a[i][4]);}}}
int f(int m,int n)
{
	int z;
	if (m>=0&&m<5)
	{
		if(n>=0&&n<5)
			z=1;
		else z=0;}
	else z=0;
	return(z);
}




