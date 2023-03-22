#include <header.h>

int main_bench()
{
	int x,y,i,count1,count2;
	int a[20],b[20];
	my_scanf("%d%d",&x,&y);
	for(count1=0;x!=0;count1++)
	{
		a[count1]=x;
		x/=2;
	}
	for(count2=0;y!=0;count2++)
	{
		b[count2]=y;
		y/=2;
	}
	i=0;
	do
	{
		i++;
	}while(a[count1-i]==b[count2-i]);
	my_printf("%d",a[count1-i+1]);
}