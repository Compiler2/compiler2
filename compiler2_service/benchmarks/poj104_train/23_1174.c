#include <header.h>

int main_bench()
{
	char str[50][100],b;
	int i,j=0;
	for(i=0;i<100;i++)
	{
		my_scanf("%s",str[i]);
			b=getchar();
		if(b!=' ')break;j++;
	}
    for(i=j;i>0;i--)
		my_printf("%s ",str[i]);
	my_printf("%s",str[0]);
}