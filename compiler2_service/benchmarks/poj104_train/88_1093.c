#define NUM_ITER 1333269

#include <header.h>

int main_bench()
{
	char c[30];
	int i,n,shi,zhong,m,l;
	gets(c);
	n=strlen(c);
	for(i=0;i<n;i++)
	{
		if(c[i]<='9'&&c[i]>='0')
		{
			shi=i;
			for(l=i;l<n;l++)
			{
				if(c[l]>'9'||c[l]<'0')
				{
					zhong=l-1;
					break;
				}
				if(l==n-1)
					zhong=n-1;
			}
			for(m=shi;m<zhong;m++)
			{
				my_printf("%c",c[m]);
			}
			my_printf("%c\n",c[zhong]);
			i=zhong;
		}
	}
	return 0;
}
