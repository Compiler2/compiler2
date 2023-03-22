#include <header.h>

int main_bench()
{
	char s[500];
	char *p;
	int i,l,j,k,m;
	my_scanf("%s",s);
	l=strlen(s);
	for(i=2;i<l+1;i++)
	for(j=0;j<=l-i;j++)
	{
	k=0;
	m=i-1;
	for(p=s+j;p<s+j+i;p++)
	{
	if(*p!=*(p+m)) k++;
	m=m-2;
	}
	if(k==0)
	{
	for(p=s+j;p<s+j+i;p++)
	my_printf("%c",*p);
	my_printf("\n");
	}
	}
	return 0;
}