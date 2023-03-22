#define NUM_ITER 1061555

#include <header.h>

int main_bench()
{
	char s1[81],s2[81];
	int i,n,m;

	gets(s1);
	gets(s2);
	n=strlen(s1);
	m=strlen(s2);
	if(n<m)
		n=m;

	for(i=0;i<n;i++)
		if(s1[i]!=s2[i]&&s1[i]-s2[i]!=32&&s2[i]-s1[i]!=32)break;

	if(i>=n)
		my_printf("=\n");
	else
	{
		if(s1[i]<'a')
			s1[i]=s1[i]+32;
		if(s2[i]<'a')
			s2[i]=s2[i]+32;

		if(s1[i]>s2[i])
			my_printf(">\n");
		else
			my_printf("<\n");
	}
}
