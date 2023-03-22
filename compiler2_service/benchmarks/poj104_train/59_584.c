#define NUM_ITER 68

#include <header.h>

char map[105][105];
int main_bench()
{
    int n,m,ans=0;
    my_scanf("%d",&n);
    for(int i=0;i<n;i++)
        my_scanf("%s",map[i]);
    my_scanf("%d",&m);
    m--;
    while(m--)
    {
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(map[i][j]=='$')
                {
                    map[i][j]='@';
                }
            }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            {
                if(map[i][j]=='@')
                {
                    if(i>0 && map[i-1][j]=='.')
                        map[i-1][j]='$';
                    if(i<n-1 && map[i+1][j]=='.')
                        map[i+1][j]='$';
                    if(j>0 && map[i][j-1]=='.')
                        map[i][j-1]='$';
                    if(j<n-1 && map[i][j+1]=='.')
                        map[i][j+1]='$';
                }
            }
    }
    ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            
            if(map[i][j]=='@' || map[i][j]=='$')
            {
                ans++;
            }
        }
       
    }
    my_printf("%d\n",ans);
    return 0;
}