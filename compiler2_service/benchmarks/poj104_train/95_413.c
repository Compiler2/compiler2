#define NUM_ITER 927305

#include <header.h>

int main_bench()
{
	char s1[100],s2[100];
	int i;
	int a,b;
	gets(s1);
	gets(s2);
	a=strlen(s1);
	b=strlen(s2);
	for(i=0;i<a;i++)
	{
		if(s1[i]>='a'&&s1[i]<='z')
			s1[i]=s1[i]-'a'+'A';
	}
    for(i=0;i<b;i++)
	{
		if(s2[i]>='a'&&s2[i]<='z')
			s2[i]=s2[i]-'a'+'A';
	}
	if(strcmp(s1,s2)>0)
		my_printf(">");
    if(strcmp(s1,s2)<0)
		my_printf("<");
    if(strcmp(s1,s2)==0)
		my_printf("=");
	return 0;
}


		