#define NUM_ITER 1335898

#include <header.h>

int main_bench()
{
	char s[3000];
	gets(s);
	int sum=1,i;
	for(i=1;i<=strlen(s);i++)
	{
		if(s[i]!=' '&&s[i]!='\0')
		{
			sum=sum+1;
		}
		if(s[i]==' '&&s[i-1]!=' ')
		{
			my_printf("%d,",sum);
			sum=0;
		}
		if(s[i]=='\0'&&s[i-1]!=' ')
		{
			my_printf("%d",sum);
		}
	}
	return 0;

}