#define NUM_ITER 33851

#include <header.h>

int check(char []);
int main_bench()
{
	int n,i;
	char s[100];
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(s);
		my_printf("%d\n",check(s));
	}
	return 0;
}
int check(char s[])
{
	int i,count=0;
	if(s[0]=='_'||(s[0]<='z'&&s[0]>='a')||(s[0]<='Z'&&s[0]>='A'))
		count++;
	else return 0;
	for(i=1;s[i]!='\0';i++)
	{
		if((s[i]<='9'&&s[i]>='0')||(s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||(s[i]=='_'))
			count++;
		else 
		{
			count=0;
			break;
		}
	}
	if(count) return 1;
	else return 0;
}