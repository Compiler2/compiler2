#include <header.h>


int main_bench() {
    int n;
    char str[1024];
    my_scanf("%d", &n);
    int flag;
    while (n--) {
        flag = 1;
        my_scanf("%s", str);
        int len = strlen(str);
        for (int i = 0; i < len; ++i) {
            if (isalpha(str[i]) || str[i] == '_')
                continue;
            else if (i != 0 && isdigit(str[i]))
                continue;
            else {
                flag = 0;
                break;
            }
        }
        if (flag)
            my_printf("yes\n");
        else
            my_printf("no\n");
    }
}