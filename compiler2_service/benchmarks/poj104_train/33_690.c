#define NUM_ITER 18748

#include <header.h>

int main_bench()
{
	int n,i,j,e;
	char jj1[150][256]={0},jj2[150][256]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",jj1[0]);



		for(j=0;j<strlen(jj1[0]);j++)
		{
			switch(jj1[0][j])
			{
			case 'A':
				jj2[0][j]='T';
				break;
			case 'T':
				jj2[0][j]='A';
				break;
			case 'C':
				jj2[0][j]='G';
				break;
			case 'G':
				jj2[0][j]='C';
				break;
			default:
				break;
			}
		}
		jj2[0][j] = '\0';



		my_printf("%s\n",jj2[0]);
	}
	return 0;
}