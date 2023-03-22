#include <header.h>

int main_bench()
{
int n;
my_scanf("%d",&n);
char sz[400],*ps;
for(int i=0;i<=n;i++){
gets(sz);
for(ps=sz;*ps!='\0';ps++){
if(*ps=='A'){
*ps='T';
}else if(*ps=='C'){
*ps='G';
}else if(*ps=='T'){
*ps='A';
}else if(*ps=='G'){
*ps='C';
}
}
my_printf("%s\n",sz);
}
}