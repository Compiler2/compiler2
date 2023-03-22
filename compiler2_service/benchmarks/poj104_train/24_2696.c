#define NUM_ITER 37381

#include <header.h>

const int N = 1000;
int main_bench() {
    char s[N],max[N],min[N];
    int max_len = 0;
    int min_len = N;
    int n;
    my_scanf("%d",&n);
    while (n-->0) {
        my_scanf("%s",s);
        int len = strlen(s);
        if ( len > max_len) {
            max_len = len;
            strcpy(max,s);
        }
        if ( len < min_len) {
            min_len = len;
            strcpy(min,s);
        }
    }
    my_printf("%s\n%s\n",max,min );
}