#include <header.h>

int fun(int a[5][5],int n,int m);
int main_bench()
{
    int a[5][5],n,m,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            my_scanf("%d",&a[i][j]);
    }
    my_scanf("%d%d",&n,&m);
    i=fun(a,n,m);
    if(i==0)
        my_printf("error\n");
    else
    {
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
if(j!=4){
                my_printf("%d ",a[i][j]);}
else{my_printf("%d",a[i][j]);}
            my_printf("\n");
        }
    }
    return 0;
}
int fun(int a[5][5],int n,int m)
{
    int i,t;
    if(!(n>=0&&n<5&&m>=0&&m<5))
    {
        return 0;
    }
    for(i=0;i<5;i++)
    {
        t=a[n][i];
        a[n][i]=a[m][i];
        a[m][i]=t;
    }
    return 1;
} 