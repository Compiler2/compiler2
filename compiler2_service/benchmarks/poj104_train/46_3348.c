#define NUM_ITER 487

#include <header.h>

int main_bench()
{
    int a[4][2]={0,1,1,0,0,-1,-1,0};
    int i,n,m,j,p;
    int map[200][200];
    int x,y;
    my_scanf("%d%d",&n,&m);
    for(i=0;i<=n+1;i++)
    for(j=0;j<=m+1;j++)
    map[i][j]=-1;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    my_scanf("%d",&map[i][j]);
    x=1;y=1;p=0;
    my_printf("%d",map[1][1]);
    map[1][1]=-1;
    while(1)
    {
            if(map[x+a[p][0]][y+a[p][1]]!=-1)
            {
                                             x+=a[p][0];
                                             y+=a[p][1];
                                             my_printf("\n%d",map[x][y]);
                                             map[x][y]=-1;
            }
            else
            {
                p=(p+1)%4;
                if(map[x+a[p][0]][y+a[p][1]]!=-1)
            {
                                             x+=a[p][0];
                                             y+=a[p][1];
                                             my_printf("\n%d",map[x][y]);
                                             map[x][y]=-1;
            }
            else
            break;
            }
    }
    
    return 0;
}
