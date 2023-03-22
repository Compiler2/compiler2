#define NUM_ITER 18

#include <header.h>

int main_bench()
{
    int a[100][100];
    int i,j,s,t,d;
    my_scanf("%d%d",&s,&t);
    for(i=0;i<s;i++){
        for(j=0;j<t;j++){
            my_scanf("%d",&a[i][j]);
        }
        my_printf("\n");
    }
    for(d=0;d<s+t-1;d++){
        for(i=0;i<s;i++){
            for(j=0;j<t;j++){
                if(i+j==d){
                    my_printf("%d\n",a[i][j]);
                }
            }
        }
    }
    return 0;
}