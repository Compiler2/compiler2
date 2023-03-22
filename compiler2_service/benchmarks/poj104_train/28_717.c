#include <header.h>

int main_bench()
{
	char str[100000]={'\0'};
	int n,i,len,temp=-1;
	gets(str);
	n=strlen(str);
	for(i=n-1;i>=0;i--)
	{
		str[i+1]=str[i];
	}
	str[0]=' ';
	for(i=0;i<=n;i++)
	{
		if(str[i]==' ')
		{
			len=i-temp-1;
			temp=i;
			if(len!=0)
				my_printf("%d,",len);
		}
	}
	my_printf("%d",(n-temp));
}