#define NUM_ITER 1273

#include <header.h>

int main_bench()
{
    int n, i, j, badall, all;
    int total[100]={60};
    my_scanf("%d", &n);
	j=0;
    for(i=0;i<n;i++)
    {
        my_scanf("%d", &badall);
		if(badall!=0)
		{
        for(j=0;j<badall;j++)
            my_scanf("%d", &total[j]);
        for(j=badall-1;j>=0;j--)
        {
            if(total[j]+j*3<=60)
            {
            all = 60 - (j+1)*3;
            if(all<total[j]){
            all=total[j];}
            break;
            }
        }
		}
		else all = 60;
        my_printf("%d\n", all);
    }
    return 0;
}
