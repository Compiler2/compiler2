#include <header.h>


int num(char x);

int main_bench()
{
	char z[105];
	my_scanf("%s",z);
	int i;
	int mid=num(z[0]);
	int m;
	if((z[2]==0 && num(z[0])*10+num(z[1])<13))
	{
		my_printf("0\n%d",num(z[0])*10+num(z[1]));
	}
	else if(z[1]==0)
	{
		my_printf("0\n%d",num(z[0]));
	}
	else
	{
		for(i=1;z[i]!=0;i++)
		{
			mid=mid*10;
			mid += num(z[i]);
			m=0;
			if(i==1 && mid<13)
			{
				continue;
			}
			while(mid>=13)
			{
				m++;
				mid-=13;
			}
			my_printf("%d",m);
		}
		my_printf("\n");
		my_printf("%d",mid);
	}
	return 0;
}

int num(char x)
{
	int a;
	a=(int)x;
	a=a-48;
	return a;
}

