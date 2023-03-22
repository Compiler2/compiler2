#include <header.h>

    int main_bench()
{
    int sz[5][5];
    int sz1[5];
    for(int i=0;i<5;i++)
    {
        for (int k=0;k<5;k++)
        my_scanf("%d",&(sz[i][k]));
    }
    int m,n;
    my_scanf("%d%d",&m,&n);
    if(m<=4&&m>=0&&n<=4&&n>=0)
    {
        for(int i=0;i<5;i++)
        {
            sz1[i]=sz[m][i];
            sz[m][i]=sz[n][i];
            sz[n][i]=sz1[i];
        }
        for(int i=0;i<5;i++)
        {
            for(int k=0;k<5;k++)
            {
                if(k==4)
                {
                    my_printf("%d\n",sz[i][k]);
                }
                else
                {
                    my_printf("%d ",sz[i][k]);
                }
            }
        }
    }
    else
    {
        my_printf("error");
    }
    return 0;
}
