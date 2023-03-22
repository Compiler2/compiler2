#define NUM_ITER 6471

#include <header.h>

int move(int *p,int x)
{
    int i;
    int temp;
    temp=*(p+x-1);
    for(i=x-1;i>0;i--)
    {
        *(p+i)=*(p+i-1);
    }
    *p=temp;
}
int main_bench()
{
    int a[100]={0};
    int n,m;
    int i;
    my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)my_scanf("%d",a+i);
    while(m--)
    move(a,n);
    for(i=0;i<n-1;i++)my_printf("%d ",*(a+i));
    my_printf("%d",*(a+i));

}
