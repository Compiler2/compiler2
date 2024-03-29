#define NUM_ITER 6962

#include <header.h>


int is_leap_year(int n);

int main_bench()
{
    int n;
    int y, m1, m2;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, j, sum = 0;

    my_scanf("%d", &n);
    for (i=0; i<n; i++) {
        my_scanf("%d %d %d", &y, &m1, &m2);
        sum = 0;
        if (is_leap_year(y)) 
            days[1] = 29;
        else
            days[1] = 28;
        if (m1 > m2) { 
            j = m1;
            m1 = m2;
            m2 = j;
        }
        for (j=m1-1; j<(m2-1); j++) 
            sum += days[j];
        if (sum % 7 == 0)
            my_printf("%s\n", "YES");
        else
            my_printf("%s\n", "NO");
    }

    return 0;
}
    

int is_leap_year(int n)
{
    if ((n % 400 == 0) || ((n % 4 == 0) && (n % 100 != 0)))
        return 1;
    else
        return 0;
}

