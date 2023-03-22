#include <header.h>


int main_bench()
{
	char s[1000];
	int i,n,b,j,k,x;
my_scanf("%s",s);
n=strlen(s);

for (i=2;i<=n;i++)
{
	
	for (k=0;k<=n-i;k++)
	{b=0;
		for (j=0;j<i;j++)
			if (s[k+j]==s[k+i-j-1])
				b++;
			if(b==i)
			{
				for (x=k;x<k+j;x++)
my_printf("%c",s[x]);				my_printf("\n");
			}
	}
}
	



			return 0;
}
