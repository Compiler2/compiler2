#include <header.h>

int main_bench()
{
int i;
char a[100],*p;
gets(a);
p=a;
for(i=0;*(p+i)!='\0';i++)
{
if((*(p+i)>=48)&&(*(p+i)<=58)){my_printf("%d",*(p+i)-48);}
else{my_printf("\n");}
}
}