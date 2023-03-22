#define NUM_ITER 1222416

#include <header.h>

int main_bench()
{
    int i,j,k,n;
    char a[1100],h;
    my_scanf("%s",a);
    for(i=0;a[i]!='\0';)
    {
        for(n=0,h=a[i],j=i;a[j]==h||(a[j]-h)==('A'-'a')||(h-a[j])==('A'-'a');j++)
        n=n+1;
        if(h<'Z')
        my_printf("(%c,%d)",h,n);
        else
        my_printf("(%c,%d)",(h-('a'-'A')),n);
        i=j;
    }
    getchar();
    getchar();
}    