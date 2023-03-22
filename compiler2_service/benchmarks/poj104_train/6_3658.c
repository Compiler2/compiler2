#include <header.h>


int main_bench()
{
    int k = 0;
    my_scanf("%d", &k);
    for( ; k>0;k-- )
    {
        int m = 0, n = 0;
        my_scanf("%d %d", &m, &n);
        int i = 0, j = 0, x = 0;
        int sum = 0;
        for ( i = 0; i < m; i++ )
        {
            for ( j = 0; j < n; j++ )
            {
                my_scanf("%d", &x );
                if ( i == 0 || j == 0 || i == m-1 || j == n-1 )
                {
                    sum+=x;
                }
            }
        }
        my_printf("%d\n",sum);
    }
    return 0;
}
