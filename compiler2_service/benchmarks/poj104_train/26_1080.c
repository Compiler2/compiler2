#define NUM_ITER 1330350

#include <header.h>

int main_bench()
{
	int l,i,k=0;
	char s[101],b[101];
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==' '&&s[i+1]==' ')
		{ b[k++]=s[i];
			while(s[i]==' ')
			{
				i++;
			}
			b[k++]=s[i];
		}
		else b[k++]=s[i];
	}
	b[k]='\0';
	my_printf("%s",b);

return 0;
}