#define NUM_ITER 1552149

#include <header.h>

int main_bench(){
char sz[10000];
int i,a;
gets(sz);
a=0;
for(i=0;sz[i]!='\0';i++){
if(sz[i]!=' '){
a=a+1;
}else{
if(a!=0){
my_printf("%d",a);
my_printf(",");
a=0;
}
}
}
my_printf("%d",a);
return 0;
}