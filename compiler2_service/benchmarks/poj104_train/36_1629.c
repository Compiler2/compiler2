#define NUM_ITER 906718

#include <header.h>

int main_bench()
{
	char s1[10000],s2[10000];
	my_scanf("%s %s",s1,s2);
	int i;
	int len1=strlen(s1);
	int len2=strlen(s2);
	if(len1!=len2)
	{
		my_printf("NO\n");
	}
	else
	{
		int i,j;
		for (i=0;i<len1;i++)
		{
            for(j=0;j<len1;j++)
			{
				if(s1[i]==s2[j])
				{
					s2[j]=' ';
					break;
				}
			}
		}
		j=0;
		for(i=0;i<len2;i++)
		{
			if(s2[i]!=' ')
				j++;
		}
		if(j==0)
			my_printf("YES\n");
		else my_printf("NO\n");
	}
}