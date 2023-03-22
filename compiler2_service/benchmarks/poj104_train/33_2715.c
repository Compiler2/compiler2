#define NUM_ITER 26012

#include <header.h>

char input[1000][256],output[1000][256];
int main_bench()
{
	int n,i,j,len;
	my_scanf("%d",&n);

	char input[1000][256],output[1000][256];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",input[i]);
	}

	for(i=0;i<n;i++)
	{
		len=strlen(input[i]);
		for(j=0;j<len;j++)
		{
			if(input[i][j]=='A')
				output[i][j]='T';
			if(input[i][j]=='T')
				output[i][j]='A';
			if(input[i][j]=='C')
				output[i][j]='G';
			if(input[i][j]=='G')
				output[i][j]='C';
		}
		output[i][len]='\0';
	}

	for(i=0;i<n;i++)
	{
		my_printf("%s\n",output[i]);
	}


	return 0;
}