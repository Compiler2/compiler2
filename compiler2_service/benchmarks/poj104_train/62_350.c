#include <header.h>


int main_bench(){
    const int MAXN = 300;
    char str[MAXN];
    gets(str);
    int i;
    my_printf("%c", str[0]);
    for (i = 1; i < strlen(str); ++ i)
        if (str[i - 1] == ' ' && str[i] == ' ')
           continue;
        else
            my_printf("%c", str[i]);
    my_printf("\n");
    return 0;
}
