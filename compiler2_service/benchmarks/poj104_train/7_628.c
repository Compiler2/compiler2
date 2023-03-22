#define NUM_ITER 241100

#include <header.h>

int main_bench()
 {
	char string[256]={'\0'};
	char subString[100]={'\0'};
	char replacement[100]={'\0'};
	int i=0,j=0,k=0;
	char c='\0';
	while(c != '\n')
	{
		c=getchar();
		if(c != '\n')
		{
			string[i] = c;
			i++;
		}
	}
	my_scanf("%s",subString);
	my_scanf("%s",replacement);
	for(i=0;i<strlen(string);i++)
	{
		if(string[i] == subString[0])
		{
			k=i;
			for(j=0;j<strlen(subString);j++,k++)
			{
				if(subString[j] != string[k]){break;}
			}
			if(j==strlen(subString))
			{
				k=i;
				for(j=0;j<strlen(replacement);j++,k++)
				{
					string[k]=replacement[j];
				}
				break;
			}
		}
	}
	my_printf("%s\n",string);
    return 0;
 }