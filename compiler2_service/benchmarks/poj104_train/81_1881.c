#define NUM_ITER 234000

#include <header.h>

int ismatrix(int m, int n)
{
    if(m>=5||n>=5||n<0||m<0){
    return 0;
    }
    return 1;
}

int main_bench()
{
    int i, j;
    int m, n;
    int a[5][5];
    for(i=0; i<5; i++)
    for(j=0; j<5; j++)
    my_scanf("%d", &a[i][j]);
    my_scanf("%d%d", &m, &n);
    if(ismatrix(m, n)){
        int tmp, first=1;
        for(i=0; i<5; i++){
            tmp=a[m][i];
            a[m][i]=a[n][i];
            a[n][i]=tmp;
        }
        for(i=0; i<5; i++)
        for(j=0; j<5; j++){
            if(j!=4)
            my_printf("%d ", a[i][j]);
            if(j==4)
            my_printf("%d\n",a[i][j]);
        }
    }
    else
    my_printf("error\n");
    return 0;
}
