#define NUM_ITER 23861

#include <header.h>

int main_bench()
{
	int n,i,k,len[1000];
	char s[1000][256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
		len[i]=strlen(s[i]);
		for(k=0;k<len[i];k++)
		{
			switch (s[i][k])
			{
			case 'A':
				{
					s[i][k]='T';
					break;
				}
			case 'T':
				{
					s[i][k]='A';
					break;
				}
			case 'C':
				{
					s[i][k]='G';
					break;
				}
			case 'G':
				{
					s[i][k]='C';
					break;
				}
			}
		}
	}
	for(i=0;i<n;i++)
		my_printf("%s\n",s[i]);
	return 0;
}
