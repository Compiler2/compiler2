#define NUM_ITER 223788

#include <header.h>

int juzhen(int hang)
{
    if (hang<5&&hang>=0)
    {
        return 1;
    }
    else return 0;

}

int main_bench()
{
    int temp,a[5][5],i,j,n,m;

    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            my_scanf("%d",&a[i][j]);
        }
    }
    my_scanf("%d %d",&n,&m);
    if (juzhen(n)&&juzhen(m))
    {

        for (j=0;j<5;j++)
        {
            temp=a[n][j];
            a[n][j]=a[m][j];
            a[m][j]=temp;
        }
    }
    else{my_printf("error\n"); return 0;}

    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
        {
            my_printf("%d ",a[i][j]);

        }
        my_printf("%d\n",a[i][4]);
    }


    return 0;
}
