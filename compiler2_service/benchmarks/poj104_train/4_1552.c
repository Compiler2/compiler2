#define NUM_ITER 18

#include <header.h>


int main_bench()
{
    int row,col,i,j,k;
    int *array[100][100];
    my_scanf("%d %d",&row,&col);
    for (i=0;i<row;i++)
        for (j=0;j<col;j++)
            my_scanf("%d",*(array+i)+j);
    for (k=0;k<=row+col;k++)
        for (i=0;i<row;i++)
            for (j=0;j<col;j++)
                if (i+j==k)
                    my_printf("%d\n",*(*(array+i)+j));
}

