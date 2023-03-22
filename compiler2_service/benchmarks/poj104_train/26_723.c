#define NUM_ITER 1355304

#include <header.h>


int main_bench()
{
char a[100];
int n,i;
gets(a);
n=strlen(a);
if(a[0]!=' ')my_printf("%c",a[0]);
for(i=1;i<n;i++){
if(a[i]!=' ')my_printf("%c",a[i]);
else{if(a[i-1]!=' ')my_printf("%c",a[i]);}}



return 0;
}