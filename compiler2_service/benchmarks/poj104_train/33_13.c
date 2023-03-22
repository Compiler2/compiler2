#include <header.h>


int main_bench()
{
	int i,j,n;
	char s[1000][300];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<strlen(s[i]);j++)
		{
			if(s[i][j]=='A')
				my_printf("T");
			if(s[i][j]=='T')
				my_printf("A");
			if(s[i][j]=='C')
				my_printf("G");
			if(s[i][j]=='G')
				my_printf("C");
		}
		my_printf("\n");
	}
	
	return 0;
}
