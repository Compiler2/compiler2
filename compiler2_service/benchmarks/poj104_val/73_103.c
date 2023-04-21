#define NUM_ITER 196435

#include <header.h>

int main_bench()
{
    int a[5][5];
    int i,j;
    int sum=0;
    int p;
    int min,max;

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            my_scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        p=0;
        max=a[i][0];
        for(j=1;j<5;j++)
        {
            if(a[i][j]>max)
            {
max=a[i][j];                
p=j;
            }
        }
        
        min=a[0][p];
        for(j=0;j<5;j++)
        {
            if(a[j][p]<min)
            {
               min=a[j][p];
            }
        }
        if(min==a[i][p])
        {
            my_printf("%d %d %d",i+1,p+1,a[i][p]);
            sum++;
        }

    }
    if(sum==0)
    {
        my_printf("not found");
    }
 return 0;
}
