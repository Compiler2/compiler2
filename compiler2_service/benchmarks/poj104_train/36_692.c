#define NUM_ITER 930620

#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int i,j,l1,l2,o=0;
	my_scanf("%s%s",s1,s2);
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1==l2)
	{
	    for(i=0;s1[i]!='\0';i++)
			for(j=0;s2[j]!='\0';j++)
			{
								if(s2[j]=='0') continue;
				if(s1[i]==s2[j])
				{
					s2[j]='0';
					o++;
					break;
				}
			}
			if(o==l1)
				my_printf("YES\n");
			else
				my_printf("NO\n");
	}
	else
		my_printf("NO\n");
}
