#include <header.h>

int main_bench()
{
	int n, i, j;
	my_scanf("%d", &n);
	char jjd[1000][256];
	int*len=(int*)malloc(sizeof(int)*n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s", jjd[i]);
		len[i]=strlen(jjd[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<len[i];j++)
		{
			if(jjd[i][j]=='A')
			{
				jjd[i][j]='T';
			}else
			{
				if(jjd[i][j]=='T')
				{
					jjd[i][j]='A';
				}else
				{
					if(jjd[i][j]=='G')
					{
						jjd[i][j]='C';
					}else
					{
					if(jjd[i][j]=='C')
					{
						jjd[i][j]='G';
					}
					}
				}
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		my_printf("%s\n", jjd[i]);
	}
	my_printf("%s", jjd[n-1]);
	free(len);
	return 0;
}