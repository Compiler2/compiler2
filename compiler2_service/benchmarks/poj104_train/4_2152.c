#define NUM_ITER 570

#include <header.h>

int main_bench()
{
    int row, col,n,i,j,k,a[120][120];
    my_scanf("%d %d", &row, &col);
    for(i=1;i<=row;i++){
                        for(j=1;j<=col;j++)
                                           {my_scanf("%d", &a[i][j]);}
                        }
    for(i=1;i<=col;i++){
                        k=i;
                        j=1;
                        while(k>=1&&j<=row){
                                    my_printf("%d\n", a[j][k]);
                                    j++;
                                    k--;
                                    }
                        }
    for(j=2;j<=row;j++){
                                     k=col;
                                     i=j;
                                     while(j<=row&&k>=1){
                                                       my_printf("%d\n", a[j][k]);
                                                       j++;
                                                       k--;
                                                       }
                                    j=i;
                                    }
    return 0;
    }