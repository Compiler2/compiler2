#include <header.h>


int main_bench()
{
	char a[500];
	int i,j,l,k,m=0;
	gets(a);
	for(i=2;i<=strlen(a);i++)
	{
		for(j=0;j<=(strlen(a)-i);j++)
		{
			for(l=j,k=j+i-1;l<=k;l++,k--)
			{
				if(a[l]==a[k])
				m=1;
				else
				{
					m=0;
					break;
				}
			}
			if(m==1)
			{
				for(k=j;k<j+i;k++)
				my_printf("%c",a[k]);
				my_printf("\n");
			}
		}
	}
	
	return 0;
}
