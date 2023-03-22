#define NUM_ITER 1062943

#include <header.h>

int main_bench()
{

char *p,*r;
p=(char*)malloc(30*sizeof(char));
gets(p);

for(r=p;*r!='\0';r++)
if ((*r>57)||(*r<48)) my_printf("\n");
else my_printf("%c",*r);

}