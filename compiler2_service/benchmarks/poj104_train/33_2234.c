#define NUM_ITER 16881

#include <header.h>

int main_bench()
{
    int n;
    my_scanf("%d", &n);
    for (int a=0; a<n; a++) {
        char b[256];
        char c[256];
        my_scanf("%s", b);
        int d=(int)strlen(b);
        for (int e=0; e<d; e++) {
            if (b[e]=='A') {
                c[e]='T';
            }else if (b[e]=='T'){
                c[e]='A';
            }else if(b[e]=='C'){
                c[e]='G';
            }else if(b[e]=='G'){
                c[e]='C';
            }
        }
        c[d]='\0';
        my_printf("%s\n", c);
    }
    return 0;
}