#define NUM_ITER 1293277

#include <header.h>

int main_bench()
{
	char a[100];
	int len,i,flag;
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' '){my_printf("%c",a[i]);flag=1;}
		else if(flag){my_printf(" ");flag=0;}
	}
	my_printf("\n");
}