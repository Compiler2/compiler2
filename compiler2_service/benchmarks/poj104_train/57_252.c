#define NUM_ITER 33496

#include <header.h>

int main_bench()
{
	char str[100][100];
	int n,i,j,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",str[i]);
	for(i=0;i<n;i++)
	{a=strlen(str[i]);
	if(str[i][a-2]=='e'&&str[i][a-1]=='r')
	{for(j=0;j<a-2;j++)
	my_printf("%c",str[i][j]);
	}
	else if(str[i][a-2]=='l'&&str[i][a-1]=='y')
	{for(j=0;j<a-2;j++)
	my_printf("%c",str[i][j]);
	}
	else 
	{for(j=0;j<a-3;j++)
	my_printf("%c",str[i][j]);
	}
	my_printf("\n");
	}
	return 0;
}