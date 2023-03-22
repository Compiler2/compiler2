#include <header.h>

int main_bench()
{
    int i,j,k,t=0,x,y,a[5][5]={0};
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        {
            my_scanf("%d",&a[i][j]);
        }
    }
    for (i=0;i<5;i++)
    {
        x=a[i][0]; y=0;
        for (j=0;j<5;j++)
        {
            if (a[i][j]>x)   {x=a[i][j]; y=j;}
        }
        for (k=0;k<5;k++)
        {
            if (a[k][y]<x)   {x=0;break;}
        }
        if (x!=0)  {my_printf("%d %d %d",i+1,y+1,x); t=1;}
    }
    if(t==0) my_printf("not found");
    getchar();
    getchar();
    getchar();
    return 0;
}
