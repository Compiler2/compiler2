#define NUM_ITER 1330949

#include <header.h>


int main_bench()
{
	char a[200];
	gets(a);
    int len;
	len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]!=' ')my_printf("%c", a[i]);
		else if(a[i]==' ' && a[i+1]!=' ') my_printf(" ");
	}
	 return 0;
}








