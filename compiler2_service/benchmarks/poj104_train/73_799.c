#define NUM_ITER 204122

#include <header.h>


int main_bench()
{
    int a[5][5];
    int j=0,i=0,k=0;
    while(j<5)
    {
        while(i<5)
        {
            my_scanf("%d",&a[j][i]);
            i++;
        }
        i=0;
        j++;
    }
    for (j=i=0; j<5; j++)
    {
        for(i=0;i<5;i++)
        {
            if(a[j][i]>=a[j][0]&&a[j][i]>=a[j][1]&&a[j][i]>=a[j][2]&&a[j][i]>=a[j][3]&&a[j][i]>=a[j][4])
            {
                if(a[j][i]<=a[0][i]&&a[j][i]<=a[1][i]&&a[j][i]<=a[3][i]&&a[j][i]<=a[4][i]&&a[j][i]<=a[2][i])
                {my_printf("%d %d %d",j+1,i+1,a[j][i]); k++;}
            }
        }
    }
    if(k==0)my_printf("not found");
}