#define NUM_ITER 226819

#include <header.h>

int b[5]={0,1,2,3,4};
int a[5][5],x,y,i,j;
int main_bench()
{
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            my_scanf("%d",&a[i][j]);
    my_scanf("%d %d",&x,&y);
    b[x]=y;
    b[y]=x;
    if (x<0 || x>4 || y<0 || y>4)
    {
        my_printf("error\n");
        return 0;
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
            my_printf("%d ",a[b[i]][j]);
        my_printf("%d\n",a[b[i]][j]);
    }
    return 0;
}