#define NUM_ITER 561870

#include <header.h>

int main_bench()
{
	char **pp;
	int i,j,m=0;
	int l1,l2;
	pp=(char **)malloc(2*sizeof(char *));
	pp[0]=(char *)malloc(5*sizeof(char));
	pp[1]=(char *)malloc(50*sizeof(char));
	my_scanf("%s",pp[0]);
	my_scanf("%s",pp[1]);
	l1=strlen(pp[0]);
	l2=strlen(pp[1]);
	for(i=0;i<l2-l1;i++)
	{
		for(j=0;j<l1;j++)
		{
			if(pp[0][j]!=pp[1][j+i])
			{
				break;
			}
		}
		if(j==l1)
		{
			break;
		}
	}
		my_printf("%d",i);
}
