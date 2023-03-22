#define NUM_ITER 27747

#include <header.h>

struct p
{
    char name[100];
    float t;
    int judge;
};
int main_bench()
{
    int m,x,y;
    my_scanf("%d",&m);
    my_scanf("%d %d",&x,&y);
    double c,d;
    c=(double)y/x;
    int a1,a2;
    for(int i=0;i<=m-2;i++)
    {
        my_scanf("%d %d",&a1,&a2);
        d=(double)a2/a1;
        if(c-d>0.05)
        {
            my_printf("worse\n");
        }
        else if(d-c>0.05)
        {
            my_printf("better\n");
        }
        else
        {
            my_printf("same\n");
        }
    }
}
