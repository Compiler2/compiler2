#define NUM_ITER 915661

#include <header.h>


int main_bench()
{
    int w,i;
    int m[12]={13,44,72,103,133,164,194,225,256,286,317,347};
    
    my_scanf("%d",&w);
    for (i=0; i<12; i++) {
        if (w==1) {
            if ((m[i]-5)%7==0) {
                my_printf("%d\n",i+1);
            }

        }
        else
        if ((m[i]-5)%7==(8-w)) {
            my_printf("%d\n",i+1);
        }
    }
    
}
