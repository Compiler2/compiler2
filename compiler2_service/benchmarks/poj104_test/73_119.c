#include <header.h>

int main_bench()
{
    int a[5][5];
    int i,j,x;
    for (i=0;i<5;i++)
    for (j=0;j<5;j++)  my_scanf("%d",&a[i][j]);
    for (i=0;i<5;i++)
    for (j=0;j<5;j++)
    {
        int flag=1;
        for (x=0;x<5;x++)
        {
            if ((a[i][x]>a[i][j]) || (a[x][j]<a[i][j]))
            {
                flag=0; break;
            }
        }
        if (flag)
        {
            my_printf("%d %d %d",i+1,j+1,a[i][j]);
            return 0;
        }
    }
    my_printf("not found");
    return 0;
}
