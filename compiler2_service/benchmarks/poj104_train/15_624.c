#include <header.h>

int main_bench()
{
    int n=0,a=0,b=0,i=0,t=0,r=0;
    int row(int,int);
    int col(int,int);
    my_scanf("%d",&n);
    for(i=0;i<(n*n);i++){
        my_scanf("%d",&t);
        if(!a&&!t)a=i;
        else if(!t) b=i;
        }
    a++;b++;
    r=(col(b,n)-col(a,n)-1)*(row(b,n)-row(a,n)-1);
    my_printf("%d\n",r);
    return 0;
}
int col(int a,int b)
{
    return a%b;
}
int row(int a,int b)
{
    return ((a-a%b)/b+1);
}

