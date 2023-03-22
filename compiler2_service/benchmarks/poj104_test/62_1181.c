#include <header.h>

int main_bench(){
char sb[1000]={'\0'};
gets(sb);
for(int i=0;sb[i]!='\0';i++){
if(sb[i]!=' ')
my_printf("%c",sb[i]);
else if(sb[i]==' '&&sb[i+1]!=' ')
my_printf(" ");
}
return 0;
}
