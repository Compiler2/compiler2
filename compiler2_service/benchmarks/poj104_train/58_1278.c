#define NUM_ITER 1387

#include <header.h>

char s[100];
int main_bench()
{
	
	int i,j,k;
	char c;
	int n;
	my_scanf("%d",&n);
	while(n--)
	{
		while(1)
		{
			c=getchar();
			if(c!='\n')
			    break;
		}
		i=0;
		while(c!='\n')
		{
			s[i++]=c;
			c=getchar();
		}
		s[i]='\0';
		
		if(s[0]=='_'||s[0]>='a'&&s[0]<='z'||s[0]>='A'&&s[0]<='Z')
		{
			int ok=1;
			for(i=1;i<strlen(s);i++)
			{
				if(s[i]=='_'||s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'||s[i]>='0'&&s[i]<='9')
				    ;
				else
				{
					ok=0;
					break;
				}
			}
			if(ok==1)
			    my_printf("1\n");
			else
			    my_printf("0\n");
		}
		else
			my_printf("0\n");
	}
	return 0;
}