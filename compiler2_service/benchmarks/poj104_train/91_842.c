#include <header.h>

int main_bench()
{
char *pi;
int i,m;
pi=(char*)malloc(sizeof(char)*101);
gets(pi);
m=strlen(pi);
for (i=0;i<m-1;i++)
{
	my_printf("%c",*(pi+i)+*(pi+i+1));
}
my_printf("%c",*(pi+m-1)+*(pi));
free(pi);

return 0;
}