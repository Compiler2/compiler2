#define NUM_ITER 1277556

#include <header.h>

int main_bench()
{
	char c[100],ans[100]={0};
	gets(c);
	int n=strlen(c),i=0;
	for(i=0;i<n;i++)
	{
		if(i!=n-1)
		{ans[i]=c[i]+c[i+1];}
		else ans[i]=c[i]+c[0];
		my_printf("%c",ans[i]);
	}
	return 0;
}
