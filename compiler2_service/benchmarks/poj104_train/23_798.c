#define NUM_ITER 1326933

#include <header.h>

int main_bench()
{
	int i=0,j=0,k;
	char str[100];
	gets(str);
	while(str[i]!='\0')
		i++;
	for(i--;i>=0;i--)
	{
		while(str[i]!=' '&&i>=0)
		{
			j++;i--;
		}
		for(k=++i;k<i+j;k++)
		{
			my_printf("%c",str[k]);
		}
		if(i!=0)my_printf(" ");
		i--;
		j=0;
	}
	my_printf("\n");
}