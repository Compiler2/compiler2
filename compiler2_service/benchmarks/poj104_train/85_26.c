#include <header.h>

int main_bench()
{
	int i,n,j;
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		char s[21]={0};
		my_scanf("%s",s);
		int k=strlen(s),w=0;
		for(j=0;j<k;j++)
		{
			if(j==0&&s[j]>='0'&&s[j]<='9')
			{
				my_printf("no\n");
				break;
			}

			if((s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9')||s[j]=='_')
				w++;
		}
		if(s[0]>='0'&&s[0]<='9')
			continue;
		if(w==k)
			my_printf("yes\n");
		else
			my_printf("no\n");
	}
	
	return 0;
}
