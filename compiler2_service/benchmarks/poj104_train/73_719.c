#define NUM_ITER 198469

#include <header.h>

main_bench()
{
    int a[5][5];
    int i,j;
    int x,y;
    int count=0;
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {my_scanf("%d",&a[i][j]);}
    for(i=0;i<5;i++)
    for(j=0;j<5;j++)
    {
        if (a[i][j]>=a[i][0]&&a[i][j]>=a[i][1]&&a[i][j]>=a[i][2]&&a[i][j]>=a[i][3]&&a[i][j]>=a[i][4]&&a[i][j]<=a[0][j]&&a[i][j]<=a[1][j]&&a[i][j]<=a[2][j]&&a[i][j]<=a[3][j]&&a[i][j]<=a[4][j])

        {
            x=i+1;
            y=j+1;
            my_printf("%d %d %d\n",x,y,a[i][j]);count++;}
        }
        if(count==0)
        my_printf("not found");
}