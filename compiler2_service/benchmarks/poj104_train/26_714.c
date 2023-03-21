#include <header.h>

int main_bench()
{
	char a[101],i;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' ')
		{
          printf("%c",a[i]);
		  continue;
		}
		else
		{
			printf(" ");
			while(a[i+1]==' ')
			 {
				 i=i+1;
			 }
		}
	}
	return 0;
}
