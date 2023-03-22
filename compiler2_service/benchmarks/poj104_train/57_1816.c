#define NUM_ITER 30654

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char s[100];
	int i,len;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
		len=strlen(s);
		if(s[len-1]=='r'&&s[len-2]=='e')
		{
			s[len-1]=s[len];
			s[len-2]=s[len];
		}
		else if(s[len-1]=='y'&&s[len-2]=='l')
		{
		    s[len-1]=s[len];
			s[len-2]=s[len];
		}
		else
		{
			s[len-1]=s[len];
			s[len-2]=s[len];
			s[len-3]=s[len];
		}
		my_printf("%s\n",s);
	}
	return 0;
}
