#define NUM_ITER 34572

#include <header.h>

int main_bench()
{
	int n,i,j,t=0;
	char s[22];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s);
		for(j=0;s[j]!='\0';j++)
		{
			if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0)))
            break;
		}
		if(s[j]!='\0')
                my_printf("no\n");
			else
				my_printf("yes\n");
		}
	return 0;
}