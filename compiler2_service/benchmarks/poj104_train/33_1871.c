#define NUM_ITER 23568

#include <header.h>

int len[10000];
char str[10000][10000];
int main_bench()

{
	int n,i,j;
	
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{my_scanf("%s",&str[i]);
	len[i]=strlen(str[i]);}
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(str[i][j]=='A')
			{str[i][j]='T';
			continue;}
			if(str[i][j]=='T')
			{str[i][j]='A';
			continue;}
			if(str[i][j]=='C')
			{str[i][j]='G';
			continue;}
			if(str[i][j]=='G')
			{str[i][j]='C';
			continue;}
		}
	}
	for(i=0;i<n;i++)
	{my_printf("%s\n",str[i]);}

	return 0;
}
