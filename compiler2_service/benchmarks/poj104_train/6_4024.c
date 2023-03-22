#include <header.h>

int main_bench()
{
    int n;
    int p,q;
    int tmp;
    my_scanf("%d",&n);
    while(n--)    
    {
        int res=0;
        my_scanf("%d%d",&p,&q);
        for(int i=0;i<p;i++)
            for(int j=0;j<q;j++)
            {    
                my_scanf("%d",&tmp);
                if(i==0||j==0|i==p-1||j==q-1)
                    res+=tmp;
            }
        my_printf("%d\n",res);
    }
    return 0;
}