#define NUM_ITER 1327414

#include <header.h>

int main_bench(){
    char s[31];
    gets(s);
    int len = (int)strlen(s);
    char* p=s;
    char* q;
    for (int i = 0; i<len; i++){
        if (*(p+i) >= '0' && *(p+i) <= '9') {
            q = p+i;
            i++;
            while (*(p+i) >= '0' && *(p+i) <= '9') {
                i++;
            }
            *(p+i) = 0;
            my_printf("%s\n", q);
        }
    }
    return 0;
}