#include <header.h>

int judge(int m,int n)
{
	if(m==n||m>4||n>4||m<0||n<0)
		return 0;
	else return 1;
}
int main_bench()
{
	int judge(int m,int n);
	int a[5][5],m,n,b,i,j;
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	{my_scanf("%d",&a[i][j]);}
	}
	my_scanf("%d",&m);
    my_scanf("%d",&n);
	if(judge(m,n)==0)
	{my_printf("error");}
	else {for(j=0;j<5;j++)
	{b=a[m][j];a[m][j]=a[n][j];a[n][j]=b;}
	for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
		{my_printf("%d",a[i][j]);
		if(j==4)my_printf("\n");
		else my_printf(" ");}}}
}
