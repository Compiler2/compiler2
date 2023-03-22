#include <header.h>

int s[5][5];
int Huan(int a,int b)
{
	int i,j;
	if(a<0||a>4||b<0||b>4)
	{
		my_printf("error\n");
		return 0;
	}
	else
	{
		for(i=0;i<a;i++)
		{
			for(j=0;j<4;j++)
				my_printf("%d ",s[i][j]);
			my_printf("%d\n",s[i][4]);
		}
		for(j=0;j<4;j++)
			my_printf("%d ",s[b][j]);
		my_printf("%d\n",s[b][4]);
		for(i=a+1;i<b;i++)
		{
			for(j=0;j<4;j++)
				my_printf("%d ",s[i][j]);
			my_printf("%d\n",s[i][4]);
		}
		for(j=0;j<4;j++)
			my_printf("%d ",s[a][j]);
		my_printf("%d\n",s[a][4]);
		for(i=b+1;i<5;i++)
		{
			for(j=0;j<4;j++)
				my_printf("%d ",s[i][j]);
			my_printf("%d\n",s[i][4]);
		}
		return 1;
	}
}
int main_bench()
{
	int i,j,m,n,t;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			my_scanf("%d",&s[i][j]);
		my_scanf("%d%d",&m,&n);
		if(m>n)
		{
			t=m;
			m=n;
			n=t;
		}
		Huan(m,n);
		return 0;
}
