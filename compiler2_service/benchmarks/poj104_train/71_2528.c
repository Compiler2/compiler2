#define NUM_ITER 6152

#include <header.h>

int main_bench()
{
     int n, i, j, y, m1, m2, a;
     int pn[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     int rn[13]={0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
     my_scanf("%d", &n);
     for(i=1; i<=n; i++)
     {
    a=0;
           my_scanf("%d%d%d", &y, &m1, &m2);
           if((y%4==0 && y%100!=0) || (y%400==0))
           {
                if(m1<m2)
                     for(j=m1; j<=(m2-1); j++)
                     {
                           a += rn[j];
                     }
                else
                     for(j=m2; j<=(m1-1); j++)
                     {
                           a += rn[j];
                     }
                if(a%7==0)
                     my_printf("YES\n");
                else
                     my_printf("NO\n");
           }
           else
           {
                if(m1<m2)
                     for(j=m1; j<=(m2-1); j++)
                     {
                           a += pn[j];
                     }
                else
                     for(j=m2; j<=(m1-1); j++)
                     {
                           a += pn[j];
                     }
                if(a%7==0)
                     my_printf("YES\n");
                else
                     my_printf("NO\n");
           }
           a=0;
     }
     return 0;
}