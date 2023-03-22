#define NUM_ITER 151103

#include <header.h>

int main_bench()
{
    char zf[300][100];
    int i,j,len[300];
    my_scanf ("%s",&zf[0]);
    len[0]=strlen(zf[0]);
    my_printf("%d",len[0]);
    for (i=1;i<300;i++)
    {
        my_scanf("%s",&zf[i]);
        len[i]=strlen(zf[i]);
        if (len[i]==0){
        break;
        }
        my_printf(",%d",len[i]);

    }
    return 0;
}