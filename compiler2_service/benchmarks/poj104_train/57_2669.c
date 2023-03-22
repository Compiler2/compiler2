#include <header.h>


int main_bench(){
    int N,l,i;
    char a[100];
    
    my_scanf("%d",&N);
    while (N--){
        my_scanf("%s",a);
        l = strlen(a);
        if (strcmp(a + l - 2, "ly") == 0) l-=2;
        if (strcmp(a + l - 2, "er") == 0) l-=2;
        if (strcmp(a + l - 3, "ing") == 0) l-=3;
        for (i=0;i<l;i++) my_printf("%c",a[i]);
        my_printf("\n");
    }

    return 0;
}