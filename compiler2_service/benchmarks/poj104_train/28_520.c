#define NUM_ITER 1059211

#include <header.h>

int main_bench()
{
	char s[3000];
	int len[300]={0};
	int i,j=0;
	int n;
    
	gets(s);
	n=strlen(s);

	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
			len[j]++;
		if(s[i]==' '&&s[i-1]!=' ')
			j++;
	}

	my_printf("%d",len[0]);
	for(i=1;i<=j;i++)
		my_printf(",%d",len[i]);

	my_printf("\n");
}