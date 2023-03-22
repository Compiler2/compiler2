#include <header.h>

int judge(int n,int m,int *p[5])
{
	int *temp;
	if(n<5&&n>=0&&m<5&&m>=0)
	{
		temp=p[n];
		p[n]=p[m];
		p[m]=temp;
		return (1);
	}
	else return (0);
}


int main_bench()
{
	int n,m,i,j,s[5][5],*p[5],a;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			my_scanf("%d",&s[i][j]);
	}
	for(i=0;i<5;i++)
		p[i]=&s[i][0];
	my_scanf("%d%d",&n,&m);
	a=judge(n,m,p);

	if(a==0)
		my_printf("error");
	else  
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<5;j++)
			{
				if(j==0)
				my_printf("%d",*(p[i]+j));
				else if(j==4)
					my_printf(" %d\n",*(p[i]+j));
				else
					my_printf(" %d",*(p[i]+j));

			}
		}
	}
}

	


