#define NUM_ITER 6493

#include <header.h>

int main_bench()
{
   
    int days[] = {   0, 31, 28, 31, 30, 31, 30,
                    31, 31, 30, 31, 30, 31    };
    int i, n, y, m, d,x1;

    my_scanf("%d", &n);
	for (i = 0; i < n; i++) {
        my_scanf("%d %d %d", &y, &m, &d);
        days[2] = (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) ? 29 : 28;
		if(m>d){
			x1=d;
			d=m;
			m=x1;
		}
			int j,sum=0;
			for(j=m;j<d;j++)
             sum+=days[j];
			 if(sum%7==0)
            my_printf("YES\n");
        else
            my_printf("NO\n");
    }
    return 0;
}