#include <header.h>



const int maxn = 110;
int n, m;
int d[maxn][maxn];

int main_bench()
{
    int t;
    
    my_scanf("%d", &t);
    while(t-->0)
    {
        int sum = 0;
        my_scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) 
            for(int j = 0; j < m; j++)
            {
                int tmp;
                my_scanf("%d", &tmp);    
                if(i == 0 || i == n-1 || j == 0 || j == m - 1)
                    sum += tmp;
            }  
            
        my_printf("%d\n", sum);
    }
 return 0;    
}
