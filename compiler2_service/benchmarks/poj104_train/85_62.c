#define NUM_ITER 31876

#include <header.h>


int main_bench()
{
	char s[20];
	int i,j;
	int len;
	int k=0;
	int n;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		k=0;
		
		
		
		my_scanf("%s",s);    
		
		

		len=strlen(s);
		if((s[0]=='_')||((s[0]>='A')&&(s[0]<='Z'))||((s[0]>='a')&&(s[0]<='z')))
		{
			for(j=1;j<len;j++)
			{
				if((s[j]=='_')||((s[j]>='A')&&(s[j]<='Z'))||((s[j]>='a')&&(s[j]<='z'))||((s[j]>='0')&&(s[j]<='9')))
				{
					k++;
				}
			}
			if(k==(len-1))
			{
				my_printf("yes\n");
			}
			if(k!=(len-1))
			{
				my_printf("no\n");
			}
		}
		else
		{
			my_printf("no\n");
		}
	}
	
	return 0;
}