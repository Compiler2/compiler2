#define NUM_ITER 1504691

#include <header.h>

int main_bench()
{
	char str[101];
	int i,flag=1,j=0;
	gets(str);

	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			flag=0;
			j++;
		}
		else 
		{
			j=0;
			flag=1;
		}
		if(!(flag==0&&j>1))
			my_printf("%c",str[i]);
	}
}