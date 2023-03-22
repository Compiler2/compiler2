#include <header.h>

int main_bench()
{
    int n[5][5],i,j,flag,a,b;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    my_scanf("%d",&n[i][j]);
    for(i=0,flag=0,b=0;i<5;i++)
    for(j=0;j<5;j++)
    {
                    for(a=0;a<5;a++)
                    if(n[a][j]<n[i][j])
                    flag=1;
                    for(a=0;a<5;a++)
                    if(n[i][a]>n[i][j])
                    flag=1;
                    if(flag==0)
                    {
                               b++;
                               if(b==1)
                               my_printf("%d %d %d\n",i+1,j+1,n[i][j]);
                               else
                               my_printf("%d %d %d\n",i+1,j+1,n[i][j]);
                    }
                    flag=0;
    }
    if(b==0)
    my_printf("not found");
    return 0;
}
