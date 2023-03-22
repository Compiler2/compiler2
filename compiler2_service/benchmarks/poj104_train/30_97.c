#define NUM_ITER 53545

#include <header.h>

int main_bench()
{
    int ans[100], total, answer;
    int n, i, j;
    total = 0;
    for (i=1;i<100;i++)
    {
        total ++;
        ans[total] = i * i;
        j = i;
        if (j % 7 == 0) {total--;continue;}
        while (j)
        {
            if (j % 10 == 7)
            {
                total --;
                break;
            }
            j /= 10;
        }
    }
    my_scanf("%d", &n);
    answer = 0;
    for (i=1; i<=total; i++)
    {
        if (n * n < ans[i]) break;
        answer += ans[i];
    }
    my_printf("%d", answer);
    return 0;
}