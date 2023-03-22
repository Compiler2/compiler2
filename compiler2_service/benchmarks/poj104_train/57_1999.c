#include <header.h>


int main_bench()
{
    int i, j, n, len;
    char word[100];

    my_scanf("%d", &n);
    for (i=0; i<n; i++) {
        my_scanf("%s", word);
        len = strlen(word);
        if (strcmp(&word[len-2], "er") == 0 || strcmp(&word[len-2], "ly") == 0)
            len -= 2;
        else if (strcmp(&word[len-3], "ing") == 0)
            len -= 3;
        for (j=0; j<len; j++)
            my_printf("%c", word[j]);
        my_printf("\n");
    }

    return 0;
}