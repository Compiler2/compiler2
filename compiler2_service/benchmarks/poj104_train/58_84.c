#define NUM_ITER 28189

#include <header.h>

int main_bench()
{
	int i,n,len,count=0;
	char s[100];
	my_scanf("%d",&n);
	getchar();
	while(n--)
	{
		gets(s);
		len=strlen(s);
		if((s[0]>='a'&&s[0]<='z')||(s[0]>='A'&&s[0]<='Z')||s[0]=='_')
		{
			if(len==1)
				my_printf("1\n");
			else if(len>1)
			{
				for(i=1;i<len;i++)
				{
					if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')||(s[i]=='_')||(s[i]>='0'&&s[i]<='9'))
					{
						count++;
					}
				}
				if(count==len-1)
					my_printf("1\n");
				else my_printf("0\n");
			}
		}
		else my_printf("0\n");
		count=0;
	}
}