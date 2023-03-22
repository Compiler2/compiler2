#define NUM_ITER 927801

#include <header.h>


daxie(char s[])
{
	int len;
	int i,j;
	len=strlen(s);
	for(i=0;i<len;i++)
		if(s[i]>='A'&&s[i]<='Z') s[i]=s[i]+'a'-'A';
	return;
}

main_bench()
{
	char s1[90],s2[90];
	int c;


	gets(s1);
	gets(s2);

	daxie(s1);
	daxie(s2);

	c=strcmp(s1,s2);
	if(c==-1) my_printf("<");
	if(c==0)  my_printf("=");
	if(c==1) my_printf(">");
}
