#include <header.h>

int main_bench()
{
    int n,k,x=0,y=0;
    my_scanf("%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    my_scanf("%d",&a[i]);
    my_scanf("%d",&k);
    for(int j=0;x+y!=n;j++)
    {
            if(a[j]==k)
            { 
                       for(int i=j;i<(n-x);i++)
                       {
                               a[i]=a[i+1];
                       }
                       x++;
                       j--;       
            }
            else
            y++;
    }
    my_printf("%d",a[0]);
    for(int i=1;i<(n-x);i++)
    my_printf(" %d",a[i]);
    getchar();
    getchar();
}
