#define NUM_ITER 1231411

#include <header.h>

int main_bench()
{
	char s[101],a[20][10]={0};
	int i,len,j,k;
	gets(s);
	len=strlen(s);
	j=k=0;
	for(i=0;i<len;i++)
	{   if(s[i]!=' ') a[k][i-j]=s[i];
		else {k++;j=i+1;}
	}
	for(k-1;k>0;k--)
		my_printf("%s ",a[k]);
	my_printf("%s",a[0]);
}