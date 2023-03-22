#define NUM_ITER 6625

#include <header.h>

int main_bench()
{
    int n;
    int i,j;
    char a[100][10];
    int x[100];
    my_scanf("%d",&n);   
    for(i=0;i<n;i++)
    my_scanf("%s %d",a[i],&x[i]);
    for (j=100;j>=60;j--)
    {
                    for(i=0;i<n;i++)                
                    {
                        if(x[i]==j)
                        my_printf("%s\n",a[i]);
                    }
    }
    for(i=0;i<n;i++)
    {
                    if(x[i]<60)
                    my_printf("%s\n",a[i]);
    }
    getchar();
    getchar();
}

        