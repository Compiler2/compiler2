#include <header.h>


int main_bench()
{
    int max = 80;
    int i, n, len;
    int end = 0;   
    char word[80];

    my_scanf("%d", &n);
    for (i = 0; i < n; i++) {
        my_scanf("%s", word);
        len = strlen(word);
        
        if (end + len + 1 > 80) {
            my_printf("\n");
            end = 0;
        }
        else {
            
            if (i > 0) {
                my_printf(" ");
                end++;
            }
        }
        my_printf("%s", word);
        end += len;
    }
    return 0;
}