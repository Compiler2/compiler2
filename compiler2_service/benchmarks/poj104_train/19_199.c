#define NUM_ITER 457632

#include <header.h>

int main_bench()
{
	char s[100],a[100],b[100];
	gets(s);
	gets(a);
	gets(b);
	int i,j=0,k=0;
	char c[100][100]={'\0'};
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!=' ')
		{
			c[j][k]=s[i];
			k++;
		}
		else
		{
			j++;
			k=0;
		}
	}
	for(i=0;i<=j;i++){
		if(strcmp(c[i],a)==0)
		{
			strcpy(c[i],b);
		}
	}
	for(i=0;i<=j;i++)
	{
		if(i==0)
		my_printf("%s",c[i]);
        else
        my_printf(" %s",c[i]);
	}
	return 0;
}
