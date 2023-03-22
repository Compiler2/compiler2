#define NUM_ITER 139046

#include <header.h>

int main_bench()
{
    int a[5][5],b[5][5];
    int i,j,max,min,flag;
    flag=0;
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                    my_scanf("%d",&a[i][j]);
                                    b[i][j]=0;
                    }
    }
    for(i=0;i<5;i++)
    {
                    max=a[i][0];
                    for(j=0;j<5;j++)if(max<a[i][j])max=a[i][j];
                    for(j=0;j<5;j++)if(a[i][j]==max)b[i][j]=1;
    }
    for(j=0;j<5;j++)
    {
                    min=a[0][j];
                    for(i=0;i<5;i++)if(min>a[i][j])min=a[i][j];
                    for(i=0;i<5;i++)if(a[i][j]==min)b[i][j]=b[i][j]+1;
    }
    for(i=0;i<5;i++)
    {
                    for(j=0;j<5;j++)
                    {
                                          
                                          if(b[i][j]==2)
                                          {
                                                        my_printf("%d %d %d",i+1,j+1,a[i][j]);flag=1;
                                          }
                    }
                    my_printf("\n");
    }
    if(!flag)my_printf("not found");
    return 0;
}