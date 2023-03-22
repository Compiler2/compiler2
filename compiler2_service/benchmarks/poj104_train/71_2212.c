#include <header.h>

int main_bench()
{
	int m1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int m[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int n,i,y,a,b,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int c=0;
		my_scanf("%d%d%d\n",&y,&a,&b);
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			if(a>b)
			{
				for(j=0;j<a-b;j++)
				{
					c+=m[b+j-1];
				}
				if(c%7==0)my_printf("YES\n");
				else my_printf("NO\n");
			}
			else if(a<b)
			{
				for(j=0;j<b-a;j++)
				{
					c+=m[a+j-1];
				}
				if(c%7==0)my_printf("YES\n");
				else my_printf("NO\n");
			}
		}
		else
		{
			if(a>b)
			{
				for(j=0;j<a-b;j++)
				{
					c+=m1[b+j-1];
				}
				if(c%7==0)my_printf("YES\n");
				else my_printf("NO\n");
			}
			else if(a<b)
			{
				for(j=0;j<b-a;j++)
				{
					c+=m1[a+j-1];
				}
				if(c%7==0)my_printf("YES\n");
				else my_printf("NO\n");
			}
		}
	}
	return 0;
}
