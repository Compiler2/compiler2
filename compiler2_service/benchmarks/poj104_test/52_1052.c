#include <header.h>

int main_bench()
{
	int a[1000];
	int m,len;
	int i;
	int temp,temp1;
	int wz,counts=0;
	my_scanf("%d %d",&len,&m);
	for(i=0;i<len;i++)
	{
		my_scanf("%d",&a[i]);
	}
	temp=a[0];
	for(i=0;counts<=len;i=i+m)
	{
		
		wz=i+m;
		if(wz>len-1)
		{
			wz=wz-len;
			i=wz-m;
		}
		temp1=a[wz];
		a[wz]=temp;	
		temp=temp1;
		counts++;
	}
	my_printf("%d",a[0]);
	for(i=1;i<len;i++)
	{
		my_printf(" %d",a[i]);
	}
	return 0;
}
