#include <header.h>


int main_bench()
{
	int x,y,a[10],b[10],m,n,i;
	my_scanf("%d%d",&x,&y);
	m=n=0;
	while (x!=0) 
	{
		a[m]=x;
		x/=2;
		m++;
	}
	while (y!=0) 
	{
		b[n]=y;
		y/=2;
		n++;
	}
	for (i=1;i<=10;i++)
		if (a[m-i]!=b[n-i]) break;
	my_printf("%d",a[m-i+1]);			
	return 0;
}