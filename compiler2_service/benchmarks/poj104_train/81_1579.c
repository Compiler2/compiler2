#define NUM_ITER 214031

#include <header.h>

int juzhen(int a[5][5],int m,int n);
int main_bench()
{ 
	
	int s[5][5],b,c,i,j;
    for(i=0;i<5;i++)
	{for(j=0;j<5;j++)
	my_scanf("%d", &s[i][j]);}
	my_scanf("%d %d",&b,&c);
	if (juzhen(s,b,c))
	{
		for(i=0;i<5;i++)
		{for(j=0;j<4;j++)
		my_printf("%d ",s[i][j]);
		my_printf("%d",s[i][4]);
		my_printf("\n");}
	}
	
	else my_printf("error");
}	

int juzhen(int a[5][5],int m,int n)
{
	int p,j;
	
	if (m<5 && n<5 && m>=0 && n>=0)
	{
	for(j=0;j<5;j++)
	{
		p=a[m][j];
		a[m][j]=a[n][j];
		a[n][j]=p;}
	return (1);
	}
	else return (0);
}