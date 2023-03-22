#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int i,j;

	my_scanf("%s%s",s1,s2);
	if(strlen(s1)!=strlen(s2))
	{
		my_printf("NO\n");
		return;
	}
	
	for(i=0;i<(int)strlen(s1);i++)
	{
		for(j=0;j<(int)strlen(s2);j++)
		{
			if(s1[i]==s2[j])
			{
				s2[j]=-1;
				break;
			}
		}

		if(j>=(int)strlen(s2))
		{
			my_printf("NO");
			return;
		}	
	}
	my_printf("YES\n");
}
