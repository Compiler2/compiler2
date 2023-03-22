#include <header.h>

int reverse(int num);
int main_bench()
{
	for(int i=0;i<6;i++)
	{
		int a,r;
		my_scanf("%d",&a);
		r=reverse(a);
		my_printf("%d\n",r);
	}
	int a;
	my_scanf("%d",&a);
	return 0;
}
int reverse(int num)
{
	int a=num,s=0;
	int SZ[100];
	int n=1,i=0;
	while((a/10)!=0)
	{
		SZ[i]=a%10;
		a=a/10;
		i++;
	}
	SZ[i]=a%10;
	if(SZ[i]<0)
	{
		s=-SZ[0];
		for(int k=1;k<=i;k++)
		{
			s=s*10-SZ[k];
		}
		s=-s;
	}
	if(SZ[i]>=0)
	{
		s=SZ[0];
		for(int k=1;k<=i;k++)
		{
			s=s*10+SZ[k];
		}
	}
	return s;
}