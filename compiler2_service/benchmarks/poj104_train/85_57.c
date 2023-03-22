#define NUM_ITER 35203

#include <header.h>


int main_bench()
{
    int n,m;
	char s[20];
	int i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
        for(j=0;s[j];j++)
		{
			if(j==0)
			{if((s[0]>='a'&&s[0]<='z')||(s[j]>='A'&&s[j]<='Z')||s[j]=='_')
               m=1;
			else
			{	m=0;
			break;}
			}
			else
			{if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_')
			m=1;
			else
			{m=0;
			break;}
			}
		}
		if(m==1)
			my_printf("yes\n");
		if(m==0)
			my_printf("no\n");
	}
	return 0;
}