#include <header.h>

int main_bench()
{
	int n,i;
    my_scanf("%d",&n);

	char t[1000][300];
	for(i=0;i<n;i++)
	{
	   my_scanf("%s",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		int l=0;
		l=strlen(t[i]);
	    int j;
		for(j=0;j<l;j++)
		{
			if(t[i][j]=='A')
			{
				my_printf("T");
			}
			if(t[i][j]=='T')
			{
				my_printf("A");
			}
			if(t[i][j]=='C')
			{
				my_printf("G");
			}
			if(t[i][j]=='G')
			{
				my_printf("C");
			}
		}
		my_printf("\n");
	}


 return 0;
}