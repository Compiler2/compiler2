#include <header.h>

int main_bench()
{
	int n,i,j,t,len;
	my_scanf("%d",&n);
	char s[20];
	for(i=0;i<n;i++)
	{
		t=0;
       my_scanf("%s",s);
	   len=strlen(s);
	   if(s[0]=='_'||s[0]>='A'&&s[0]<='Z'||s[0]>='a'&&s[0]<='z')
            t++;
	   for(j=1;s[j]!='\0';j++)
			{
				if(s[j]>='0'&&s[j]<='9'||s[j]=='_'||s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')
					t++;
			}	
		if(t==len)
		my_printf("yes\n");
		else
		my_printf("no\n");
	}
	return 0;
}