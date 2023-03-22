#include <header.h>

int main_bench()
{
	char w[10000];
	int s[10000]={0};
	int b=0,k=0;
	int i;
	int n=0;
	gets(w);
	n=strlen(w);
	for(i=0;w[i]!='\0';i++)
	{
		if(w[i]!=' ')
		{
			s[k]++;
		}
		if((w[i]==' ')&&(w[i+1]!=' '))
		{
			k++;
			b++;
		}
	}
	my_printf("%d",s[0]);
	for(k=1;k<=b;k++)
	{
	    my_printf(",%d",s[k]);
	}
	return 0;
}