#include <header.h>

int main_bench()
{
	char a[50]={0},b[50]={0},c[50][50]={0};
	int changdu1,changdu2,i,j;
	my_scanf("%s",a);
	my_scanf("%s",b);
	changdu1=strlen(a);
	changdu2=strlen(b);
	for(i=0;i<changdu2-changdu1+1;i++)
	{
		for(j=0;j<changdu1;j++)
			c[i][j]=b[j+i];
	}
	for(i=0;i<changdu2-changdu1+1;i++)
	{
		if(strcmp(c[i],a)==0)
		{
			my_printf("%d",i);
			break;
		}
	}
	return 0;
}