#include <header.h>

int main_bench()
{
	char word[300][50],c=' ';
	int num[300]={0},i,t;
	for(i=1;c==' ';i++)
	{
		my_scanf("%s",word[i]);
		c=getchar();
		num[i]=strlen(word[i]);
		t=i;
	}
	for(i=1;i<t;i++)
		my_printf("%d,",num[i]);
		my_printf("%d",num[t]);

		
	}