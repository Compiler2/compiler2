#define NUM_ITER 82248

#include <header.h>

int main_bench()
{
int i;
char *p;
p=(char*)malloc(1000*sizeof(int));
gets(p);
for(i=0;*(p+i)!='\0';i++)
{
if(*(p+i)==' ')
{
my_printf(" ");
for(i=i+1;*(p+i)==' ';i++);
i=i-1;
}
else{my_printf("%c",*(p+i));}
}
}