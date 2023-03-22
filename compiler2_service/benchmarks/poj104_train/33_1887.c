#define NUM_ITER 23563

#include <header.h>


int main_bench()
{
    int n,i,l,j;
	char s[1000][300],ds[1000][300];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",&s[i]);
        l=strlen(s[i]);
		for (j=0;j<l;j++)
		{
			if (s[i][j]=='A') ds[i][j]='T';
			if (s[i][j]=='T') ds[i][j]='A';
			if (s[i][j]=='G') ds[i][j]='C';
			if (s[i][j]=='C') ds[i][j]='G';
		}
        ds[i][l]='\0';
	}
	for (i=0;i<n;i++) puts(ds[i]);
    return 0;
}