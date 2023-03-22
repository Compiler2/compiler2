#define NUM_ITER 34825

#include <header.h>

int main_bench()
{
	int n,i,j=0;
	char s[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		j=0;
		my_scanf("%s",s);
	while(s[j]!='\0')
	{
		if(s[j]=='A')my_printf("T");
		if(s[j]=='T')my_printf("A");
		if(s[j]=='G')my_printf("C");
		if(s[j]=='C')my_printf("G");
		j++;
	}
	my_printf("\n");
}
	return 0;
}
		
