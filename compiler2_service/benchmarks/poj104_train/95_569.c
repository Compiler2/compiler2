#define NUM_ITER 777488

#include <header.h>

int main_bench()
{
	char c,s1[80],s2[80];
	int i,n;

	gets(s1);
	for (i=0;i<strlen(s1);i++)
		if (s1[i]>='a' && s1[i]<='z') s1[i]-=32;

	gets(s2);
	for (i=0;i<strlen(s2);i++)
		if (s2[i]>='a' && s2[i]<='z') s2[i]-=32;

	if (strlen(s1)>strlen(s2))
		n=strlen(s1);
	else n=strlen(s2);

    for (i=0;i<n;i++)
	{
		if (s1[i]==s2[i])
		{
			  if (i==n-1) my_printf("=\n");
			  continue;
		}
		if (s1[i]>s2[i]) 
		{
			my_printf(">\n");
			break;
		}
		if (s1[i]<s2[i]) 
		{
			my_printf("<\n");
			break;
		}
	}
	

	return 0;

}

