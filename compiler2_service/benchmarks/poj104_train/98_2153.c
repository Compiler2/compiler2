#define NUM_ITER 32487

#include <header.h>












    int main_bench() {
        int n, i, wl, len = 0,line=0;
        char w[64];
        my_scanf("%d", &n);
        for (int i=1; i<=n; i++) {
            my_scanf("%s",w);
            wl=strlen(w);
            if (line==0) {
                my_printf("%s",w);
                len=wl;
                line++;
            }
            else if(len+wl+1<=80)
            {
                my_printf(" %s",w);
                len+=wl+1;
            }
            else if(len+wl+1>80)
            {
                my_printf("\n%s",w);
                len=wl;
            }
        }
        return 0;
    }






