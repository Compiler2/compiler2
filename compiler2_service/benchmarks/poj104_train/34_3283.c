#include <header.h>

int main_bench()
{
	int n;
	void suan(int a);
	my_scanf("%d",&n);
    suan(n);
    
}
void suan(int a)
{
	int s;
    if(a==1)
		my_printf("End");
	else if(a%2==0)
	{
		s=a/2;
		if(s!=1)
		{
			my_printf("%d/2=%d\n",a,s);
		suan(s);
		}
		else 
		{   my_printf("%d/2=%d\n",a,s);
		my_printf("End");}
		
	}
	else if(a%2!=0)
	{
		s=a*3+1;
		my_printf("%d*3+1=%d\n",a,s);
		suan(s);
	}
}