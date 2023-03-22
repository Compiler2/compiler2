#define NUM_ITER 1025667

#include <header.h>


int main_bench()
{
char *p;
int i;
p=(char *)malloc(30*sizeof(char));
gets(p);
for(i=0;*(p+i)!='\0';i++)
{if(*(p+i)>='0'&&*(p+i)<='9') my_printf("%c",*(p+i));
else if(*(p+i+1)>='0'&&*(p+i+1)<='9') my_printf("\n");}
return 0;}
