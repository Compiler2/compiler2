#include <header.h>



int main_bench()
{
	int n,x=0;
	my_scanf("%d ",&n);
	char c[81];
	int t,len;
	char *p;
	for(x=0;x<n;x++)
	{	
		gets(c);
		len=strlen(c);
		p=c;
		if(*p=='_'||((*p)>=65&&*p<=90)||(*p>=97&&*p<=122))
		{
			t=1;
			for(p=c+1;p<c+len;p++)
			{
				if(*p=='_'||(*p>=65&&*p<=90)||(*p>=97&&*p<=122)||(*p>=48&&*p<=57))
					t=1;
				else
				{
					t=0;
					break;
				}
			}
		}
		else
			t=0;
		if(t==1)
		my_printf("yes\n");
		else 
			my_printf("no\n");
	}
	return 0;
}