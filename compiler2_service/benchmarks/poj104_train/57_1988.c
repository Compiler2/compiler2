#define NUM_ITER 22802

#include <header.h>

int main_bench()
{
    int n,i;
    my_scanf("%d\n",&n);
    for(i = 0;i < n;i++){
        char a[15],*b;
        int l;
        b = a;
        my_scanf("%s\n",b);
        l = strlen(a);
        b = &a[l-1];
        if(strcmp(b,"r") == 0||strcmp(b,"y") == 0){
           a[l-2] = 0;
           }
        if(strcmp(b,"g") == 0){
           a[l-3] = 0;
           }
         b = a;
         my_printf(b);
         my_printf("\n");
     }
    return 0;
}
