#define NUM_ITER 808346

#include <header.h>

int main_bench()
{
    int l,i;
    char a[1000]={0},b[1000]={0};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
       {b[i]=a[i]+a[(i+1)%l];
       my_printf("%c",b[i]);}
return 0;
}