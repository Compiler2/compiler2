#define NUM_ITER 1118304

#include <header.h>


int main_bench()
{
	char s[1000]; 
	int len,k=0,a[1000],l,i;
	gets(s);
	len=strlen(s);
	for (i=0;i<len;i++)
	{
		a[i]=(k*10+s[i]-'0')/13;
		k=(k*10+s[i]-'0')%13;
	}
	l=0;
	while (a[l]==0&&l<len-1) l++;
	for (i=l;i<len;i++)
		my_printf("%d",a[i]);
	my_printf("\n%d\n",k);
}