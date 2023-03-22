#include <header.h>

int main_bench()
{
	int i,j,t;
	char string[256]={0};
	char substring[256]={0};
	char replacement[256]={0};
	my_scanf("%s",string);
	my_scanf("%s",substring);
	my_scanf("%s",replacement);
	for(i=0;i<strlen(string);i++)
	{
		t=0;
		if(substring[0]==string[i])
		{
			for(j=0;j<strlen(substring);j++)
			{
				if(substring[j]==string[i+j]) t++;		
			}
		}
		if(t==strlen(substring)) 
		{
			break;
		}
	}
	if(i<strlen(string)-1)
	{
	for(j=0;j<strlen(substring);j++)
	{
		string[j+i]=replacement[j];
	}
	}
	my_printf("%s",string);
}
