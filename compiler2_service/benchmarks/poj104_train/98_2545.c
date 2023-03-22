#include <header.h>


int main_bench()
{
    int i;
    int count;
    char *buf;
    char **words;
    int line_word_count = 0;
    my_scanf("%d", &count);
    words = (char **)malloc(count * sizeof(char *));
    for (i = 0; i < count; i++) {
        buf = (char *)malloc(41 * sizeof(char));
        my_scanf("%s", buf);
        *(words + i) = buf;
    }
    for (i = 0; i < count; i++) {
        if (i != count - 1 && line_word_count + strlen(*(words +i)) + 1 > 80) {
            my_printf("\n");
            line_word_count = 0;
        }
        if (line_word_count != 0) {
            line_word_count += 1;
            my_printf(" ");
        }
        line_word_count += strlen(*(words + i));
        my_printf("%s", *(words +i));
    }
    return 0;
}