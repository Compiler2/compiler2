#define NUM_ITER 9874

#include <header.h>


const int MAXN = 600;

int main_bench()
{
    int n; my_scanf("%d", &n);
    int num[MAXN], temp;
    int i, j, index = 0;
    for (i = 0; i < n; ++ i)
    {
        my_scanf("%d", &temp);
        if (temp % 2 == 1)
           num[index ++] = temp;
    }
    for (i = 0; i < index; ++ i)
        for (j = index - 1; j > 0; -- j)
            if (num[j] < num[j - 1])
               {
                        temp = num[j - 1];
                        num[j - 1] = num[j];
                        num[j] = temp;
               }
    my_printf("%d", num[0]);
    for (i = 1; i < index; ++ i)
        my_printf(",%d", num[i]);
}
