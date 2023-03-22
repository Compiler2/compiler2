#define NUM_ITER 874102

#include <header.h>

int main_bench()
{
	char n[100]={0},s[100]={0};
	int nn[100]={0},y=0,len,i;
	my_scanf("%s",n);
	len=strlen(n);
	for(i=0;i<len;i++)
	{
		nn[i]=n[i]-'0';
	}
	for(i=0;i<len;i++)
	{
		s[i]=nn[i]/13+'0';
		y=nn[i]%13;
		nn[i+1]=nn[i+1]+10*y;
	}
	if(s[0]=='0'&&s[1]==0||s[0]=='0'&&s[1]=='0'&&s[2]==0)
		my_printf("0");
	else
	{
		if(s[1]!='0')
		i=1;
		else
		i=2;
		for(;i<len;i++)
		{
			my_printf("%c",s[i]);
		}
	}
	my_printf("\n");
	my_printf("%d\n",y);
}