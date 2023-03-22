#define NUM_ITER 1099777

#include <header.h>

int main_bench()
{
	char str[100],word[20][50]={'\0'};
	gets(str);
	int i,n,j=0,s=0;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ') {word[j][s]=str[i];s++;}
		else {j++;s=0;}
	}
	for(i=j;i>0;i--)
		my_printf("%s ",word[i]);
	my_printf("%s",word[0]);
}
