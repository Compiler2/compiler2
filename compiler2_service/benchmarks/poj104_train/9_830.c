#define NUM_ITER 12426

#include <header.h>


char id[101][11];

int main_bench()
{   int n;
    int age[101],a[101];
    my_scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        my_scanf("%s%d",id[i],&age[i]);
        int j=i;
        if (age[i]>=60)
        {
           for (;j>1&&age[a[j-1]]<age[i];j--)
           a[j]=a[j-1];
        }
        a[j]=i;
    }
    for (int i=1;i<=n;i++)
    my_printf("%s\n",id[a[i]]);
    getchar();
    getchar();
    return 0;
    
}