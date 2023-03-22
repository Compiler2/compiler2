#define NUM_ITER 4330

#include <header.h>

main_bench()
{
    int m;
my_scanf("%d",&m);
int i;
    for(i = 1;i<= m;i ++)
    {
        int n;
        my_scanf("%d",&n);
        float a=2,b=1,c,s=0;
int j;
        for(j = 1; j <=n;j++)
        {
            s+=a/b;
            c = a;
            a += b;
            b = c;
         }
        my_printf("%.3f\n",s);
    }
}
