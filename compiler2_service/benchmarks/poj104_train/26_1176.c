#define NUM_ITER 1351467

#include <header.h>

int main_bench() {
char a[101];
int i,n,b,j;
gets(a);
n=strlen(a);
for(i=0;i<n;i++){
if(a[i]==' '){
if(a[i+1]==' '){
continue;}else{my_printf("%c",a[i]);}
}else{my_printf("%c",a[i]);}}
return 0;
}