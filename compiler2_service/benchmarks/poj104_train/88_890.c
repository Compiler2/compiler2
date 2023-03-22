#include <header.h>

int main_bench()
{
int i;
char *p;
p=(char*)malloc(1000*sizeof(int));
gets(p);
for(i=0;*(p+i)!='\0';i++)
{
if((*(p+i)>=48)&&(*(p+i)<=58)){my_printf("%d",*(p+i)-48);}
else{my_printf("\n");}
}
}