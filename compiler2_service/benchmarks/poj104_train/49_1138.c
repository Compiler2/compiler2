#define NUM_ITER 1124040

#include <header.h>

int main_bench()
{
	int n;
	char c[501];
	gets(c);
	n=strlen(c);
	int i;
	int j;
	int k;
	int x;
	int m;
	int t;
	int q;
	int p;
	int y;
	for(i=2;i<=n;i++)
	{
		m=n-i+1;
		for(j=0;j<m;j++)
		{
			y=0;
			q=i/2+j;
			p=j+i-1;
			for(k=j;k<q;k++)
			{
				if(c[k]==c[p-k+j])
					y++;
			}
			if(y==i/2)
			{
				for(x=j;x<=p;x++)
					my_printf("%c",c[x]);
				my_printf("\n");
			}
		}
	}
	return 0;
}