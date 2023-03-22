#define NUM_ITER 31515

#include <header.h>

int main_bench()
{
	int n,i,j,m;
	char cz[10000][32];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&cz[i]);
        m=strlen(cz[i]);
			if(cz[i][m-1]=='r'&&cz[i][m-2]=='e')
				cz[i][m-2]=0;
		
			if(cz[i][m-1]=='y'&&cz[i][m-2]=='l')
				cz[i][m-2]=0;
			while(m>=4)
			{
			if(cz[i][m-1]=='g'&&cz[i][m-2]=='n'&&cz[i][m-3]=='i')
				cz[i][m-3]=0;
			    break;
			}
	}
	for(j=0;j<n;j++)
	{
		my_printf("%s\n",cz[j]);
	}
	return 0;
}