#define NUM_ITER 8902

#include <header.h>

int main_bench()
{
    int a,n;
    int i,j;
    my_scanf("%d",&n);
    int b[20];
    b[0]=1;b[1]=1;
    for(i=0;i<n;i++)
    {
       my_scanf("%d",&a);
       if(a==1) my_printf("%d\n",b[0]);
       else if(a==2) my_printf("%d\n",b[1]);
       else if(a>2)
       {
            for(j=2;j<a;j++)
            b[j]=b[j-1]+b[j-2];
       my_printf("%d\n",b[a-1]);
       }
    }
    getchar();
    getchar();
}
