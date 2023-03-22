#include <header.h>

int main_bench()
{
	char s[101],c[101],len;
	int i,j=0,p;
	gets(s);
	len=strlen(s);
	for(i=len-1;i>=0;i--)
	if(*(s+i)==' ')
	{
		
		for(p=1;*(s+i+p)!=' '&&*(s+i+p)!='\0';p++)
			my_printf("%c",*(s+i+p));
		my_printf(" ");
	}
	for(p=0;*(s+p)!=' '&&*(s+p)!='\0';p++)
			my_printf("%c",*(s+p));
}

		

		

	
				




	
	

