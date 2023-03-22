#define NUM_ITER 1038576

#include <header.h>

int main_bench()
{
	char s1[100],s2[100],m;
	int a,l,i,j,k;
	my_scanf("%s%s",s1,s2);
	l=strlen(s1);
	if(l!=strlen(s2))my_printf("NO");
	else
	{
		for(i=0;i<=l-1;i++)
		{
			for(j=i;j<=l-1;j++)
			{
				if(s1[i]==s2[j])
				{
					m=s2[i];
					s2[i]=s2[j];
					s2[j]=m;
				}
			}
				if(s1[i]!=s2[i])
				{
					my_printf("NO");
					break;
				}
		}
		if(i==l)my_printf("YES");
	}
}