#define NUM_ITER 1012092

#include <header.h>

int main_bench()
{
	int i,n,r;
	char s1[1000],s2[1000];
	gets(s1);
	gets(s2);
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		if (s1[i]>='A'&&s1[i]<='Z')
			s1[i]=s1[i]+32;
		if (s2[i]>='A'&&s2[i]<='Z')
			s2[i]=s2[i]+32;
	}
	r=strcmp(s1,s2);
	if(r>0) my_printf(">");
	if(r==0) my_printf("=");
	if(r<0)  my_printf("<");
	return 0;
}