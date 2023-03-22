#include <header.h>

int main_bench()
{
    int hanshu(int juzhen[5][5],int x,int y);
    int a[5][5],i,x,y,k,e;
    for(i=0;i<5;i++)
    {
        for(k=0;k<5;k++)
        {
            my_scanf("%d",&a[i][k]);
        }
    }
    my_scanf("%d %d",&x,&y);
    e=hanshu(a,x,y);
    if(e==1)
    {
        for(i=0;i<5;i++)
        {
            for(k=0;k<5;k++)
            {
                if(k==0)
                my_printf("%d",a[i][k]);
                else
                my_printf(" %d",a[i][k]);
                if(k==4)
                my_printf("\n");
            }
        }
    }
    if(e==0)
    {
        my_printf("error");
    }
}
int hanshu(int juzhen[5][5],int m,int n)
{
    int c,d[5],p;
    if(m>=0&&m<5&&n>=0&&n<5)
    {
        c=1;
        for(p=0;p<5;p++)
        {
            d[p]=juzhen[m][p];
            juzhen[m][p]=juzhen[n][p];
            juzhen[n][p]=d[p];
        }
        return (c);
    }
    else
    {
        c=0;
        return (c);
    }
}