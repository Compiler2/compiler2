#define NUM_ITER 600809

#include <header.h>

int main_bench()
{
    char y[100],h[100],c[100];
    int i,j,len[3],count=0,k=0,a[100];
    my_scanf("%s",&y);
    my_scanf("%s",&h);
    my_scanf("%s",&c);
    for (i=0;i<strlen(y);i++){
        for (j=0;j<strlen(h);j++){
            if (y[i+j]==h[j]){
            count++;
            }
        }
        if (count==strlen(h))
        {
            k++;
            a[k]=i;
        }
        count=0;
    }
    if (k==0){
        my_printf("%s",y);
        return 0;
    }
    for (i=0;i<a[1];i++)
        my_printf("%c",y[i]);
        my_printf("%s",c);
        if (i==k)
           return 0;
        for (j=a[1]+strlen(h);j<strlen(y);j++){
            my_printf("%c",y[j]);
        }
    return 0;
}
