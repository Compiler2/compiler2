#define NUM_ITER 1041529

#include <header.h>

int main_bench()
{
	char sz[101];
	gets(sz);
	int n,yushu=0,shang,m;
	n=strlen(sz);
	for(int i=0;i<n;i++)
	{
		m=yushu*10+ (sz[i]-'0');
		shang=m/13;
		yushu=m%13;
		if(n>2&& i<2&& shang==0)
		{
			my_printf("");
		}
		else if(n==2 && i==0)
		{
			my_printf("");
		}
		else
		{
			my_printf("%d",shang);
		}
	}
	my_printf("\n%d",yushu);
}