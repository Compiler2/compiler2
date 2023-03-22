#include <header.h>

int main_bench()
{
	int a[9000],n,i=0,max,sec;
	my_scanf("%d%c",&a[i],&a[i+1]);
	while(a[i+1]==',')
	{
		i++;
	my_scanf("%d%c",&a[i],&a[i+1]);
	}
	n=i;
	max=a[0];
	for(i=0;i<=n;i++)
	{if(a[i]>max)
	max=a[i];}
	sec=-1;
	for(i=0;i<=n;i++)
	{if(a[i]>sec&&a[i]<max)
	sec=a[i];}
	if(sec==max||sec==-1)
		my_printf("No");
	else
		my_printf("%d",sec);
}