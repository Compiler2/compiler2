#define NUM_ITER 1499571

#include <header.h>

int main_bench() {
char a[101] ;
gets(a);
char b=a[0];
for(int i=0;a[i];i++){
if((b==' ')&&(a[i]==' ')){
continue;
}else{
my_printf("%c",a[i]);
b=a[i];
}
}
my_printf("\n");
return 0;
}
