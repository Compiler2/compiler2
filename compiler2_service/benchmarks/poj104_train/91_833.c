#include <header.h>

 
int main_bench()
{
		char a[102];
		char b[102];
		gets(a);
		int i =0;
		for(;i<strlen(a);i++)
		{
			b[i] = a[i]+a[(i+1)%strlen(a)];
		}
		b[i]='\0';
		my_printf("%s",b);
		return 0;
}