#include <header.h>


int main_bench()
{
	int n,i,len;
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++)
	{
		char*p;
		int s=0;
		char*a=(char*)malloc(sizeof(char)*81);
		gets(a);
		len=strlen(a);
		p=a;
		if(!((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||(*p=='_')))
			my_printf("0\n");
		else
		{
			for(p=a+1;p<a+len;p++)
			{
				if((*p>='a'&&*p<='z')||(*p>='A'&&*p<='Z')||(*p>='0'&&*p<='9')||(*p=='_'))
					s++;
			}
			if(s==len-1)
				my_printf("1\n");
			else
				my_printf("0\n");
		}

	}
	return 0;
}