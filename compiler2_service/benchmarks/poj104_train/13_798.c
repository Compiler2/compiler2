#include <header.h>

int main_bench()
{
	int n,b;
	int m[20002];
	int i=1;
	int a=2;
	int num;
	my_scanf("%d",&n);
	do
	{
		my_scanf("%d",&m[i]);
		i++;
	}while(i<=n);
	if(n==1)
	{my_printf("%d",m[1]);}
	else
	{
		my_printf("%d",m[1]);
		do
		{
			b=1;
			do
			{ 
				num=0;
				if(m[b]==m[a]){num++;break;}
				else{b++;}
			}while(b<a);
			if(num==0){my_printf(" %d",m[a]);}
			else{}
			a++;
		}while(a<=n);
	}
	return 0;
}
	