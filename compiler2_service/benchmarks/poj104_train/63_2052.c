#define NUM_ITER 32

#include <header.h>

int main_bench()
{
    int x1,y1,x2,y2;
    int a[100][100],b[100][100];
    my_scanf("%d%d",&x1,&y1);
    for(int i=0;i<x1;i++)
        for (int j=0; j<y1; j++)
            my_scanf("%d",&a[i][j]);
    my_scanf("%d%d",&x2,&y2);
    for(int i=0;i<x2;i++)
        for (int j=0; j<y2; j++)
            my_scanf("%d",&b[i][j]);
    for(int i=0;i<x1;i++)
        for (int j=0; j<y2; j++)
        {
            int k1=0;
            for(int k=0;k<y1;k++ )
                k1+=a[i][k]*b[k][j];
            my_printf("%d",k1);
            if(j!=y2-1) my_printf(" ");
            else  my_printf("\n");
        }
}
