#define NUM_ITER 289

#include <header.h>

int main_bench()
{
	int n,i,j;
	char ys[1000],hc[1000];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&ys);
		for(j=0;j<1000;j++)
		{
			if(ys[j]=='\0')
			{
				hc[j]='\0';
			}
			switch (ys[j])
			{
				case 'G':
				hc[j]='C';
				break;
				case 'C':
				hc[j]='G';
				break;
				case 'A':
				hc[j]='T';
				break;
				case 'T':
				hc[j]='A';
				break;
			}
		}
		puts(hc);
	}
	return 0;
}