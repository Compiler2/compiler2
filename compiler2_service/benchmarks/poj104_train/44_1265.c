#define NUM_ITER 283444

#include <header.h>

void reverse(int x)
{
    int i,b[100],p,r,y;
    my_scanf("%d",&x);
    i=0;
    if(x==0||x==(-0))
    my_printf("0");
    if(x<0)
    p=0;
    else
    p=1;
    y=abs(x);
    while(y%10==0)
    {
      y=y/10;
    }   
    b[i]=y%10;
    while(y/10!=0)
    {
     y=y/10;            
     b[i+1]=y%10;
     i++;
    }
    if(p==0)
    my_printf("-");
    for(r=0;r<=i;r++)
    {
     my_printf("%d",b[r]);
    }
    my_printf("\n");
}
int main_bench()
{
    int a[6],i;
    for(i=0;i<6;i++)
    {
     my_scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
     reverse(a[i]);
    }
    getchar();
    getchar();
}
