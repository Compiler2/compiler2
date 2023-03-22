#define NUM_ITER 547112

#include <header.h>

int main_bench()
{
	char str[100],word[100][100]={'\0'};
	int i,j,k=0,a[100]={0},l;
	gets(str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if (str[i]!=32)
		{
			word[k][a[k]]=str[i];
			a[k]++;
		}
		else k++;
	}
	for(i=k;i>0;i--)
		my_printf("%s ",word[i]);
	my_printf("%s",word[0]);
}
