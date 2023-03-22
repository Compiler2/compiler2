#define NUM_ITER 446

#include <header.h>

int main_bench()
{
    int m,n,i,q;
    my_scanf("%d%d",&m,&n);
    int qq[m+2][n+2];
    for(i=1;i<m+1;i++)
    {
        for(q=1;q<n+1;q++)
        {
            my_scanf("%d",&qq[i][q]);
        }
    }
    for(i=0;i<n+2;i++)
    {
        qq[0][i]=qq[m+1][i]=0;
    }
    for(i=0;i<m+2;i++)
    {
        qq[i][0]=qq[i][n+1]=0;
    }
    for(i=1;i<m+1;i++)
    {
        for(q=1;q<n+1;q++)
        {
            if(qq[i][q]>=qq[i-1][q]&qq[i][q]>=qq[i+1][q]&qq[i][q]>=qq[i][q-1]&qq[i][q]>=qq[i][q+1])
            {
                my_printf("%d %d\n",i-1,q-1);
            }
            else
            {
                i=i;
                q=q;
            }
        }
    }
    return 0;
}