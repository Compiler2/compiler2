#define NUM_ITER 20240

#include <header.h>

int main_bench()
{
	int n,i,j,sum=0;
	char s[500][100];
	char *p;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	my_scanf("%s",s[i]);
	for(i=0;i<n-1;i++)
	{
		for(p=s[i];p<s[i]+strlen(s[i]);p++)
		my_printf("%c",*p);
		sum+=strlen(s[i])+1;
		if(sum+strlen(s[i+1])>80)
		{
			my_printf("\n");
			sum=0;
		}
		else my_printf(" ");
	}
	for(p=s[n-1];p<s[n-1]+strlen(s[n-1]);p++)
	my_printf("%c",*p);
	return 0;
}