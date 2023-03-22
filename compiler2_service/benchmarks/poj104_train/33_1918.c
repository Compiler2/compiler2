#include <header.h>

int main_bench()
{
    int n,len=0;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		char s[256];
		my_scanf("%s",s);
        len=strlen(s);
		for(int j=0;j<len;j++)
		{
			if(s[j]=='A')  my_printf("T");
            if(s[j]=='T')  my_printf("A");
			if(s[j]=='C')  my_printf("G");
			if(s[j]=='G')  my_printf("C");
		}
		my_printf("\n");
	}
	return 0;
}