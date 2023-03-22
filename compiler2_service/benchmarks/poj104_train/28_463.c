#include <header.h>

int main_bench()
{
	char sent[999];
	int l,i,k=0;
	gets(sent);
	l=strlen(sent);
	for(i=0;i<l;i++)
	{
		if(sent[i]!=' ')
			k++;
		if(sent[i]==' '&&i!=0&&k!=0)
		{
			my_printf("%d,",k);
			k=0;
		}
	}
	my_printf("%d\n",k);
}
