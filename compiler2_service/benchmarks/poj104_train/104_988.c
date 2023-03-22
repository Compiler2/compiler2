#define NUM_ITER 180409

#include <header.h>

int log(int n)
{
    int i=-1,power=1;
    while(power<n+1)
    {
        power=power*2;
        i=i+1;
    }
    return i;
}
void back(int a[],int n)
{
    int i;
    a[0]=n;
    for(i=0;i<log(n)+1;i++)
        a[i+1]=a[i]/2; 
}
int main_bench()
{
    int i,m,n;
    int a[11],b[11];
    my_scanf("%d %d",&m,&n);
    back(a,m);
    back(b,n);
    
    for(i=0;i<12;i++)
        if(a[log(m)-i]==b[log(n)-i]&&a[log(m)-1-i]!=b[log(n)-i-1])
        {
            my_printf("%d\n",a[log(m)-i]);
            break;
        }
}