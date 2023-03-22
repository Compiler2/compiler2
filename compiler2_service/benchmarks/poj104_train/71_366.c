#define NUM_ITER 3223

#include <header.h>

int f(int y,int m);
main_bench()
{
    int n;
    my_scanf("%d",&n);
    my_printf("\n");
    int i,y[200],m1[200],m2[200];
    for (i=0;i<n;i++)
    {    
       my_scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
       if (f(y[i],m1[i])%7==f(y[i],m2[i])%7)
          my_printf("YES\n");
       else
          my_printf("NO\n");
    }
}
int f(int y,int m)
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int i;


    if ((y%4==0)&&(y%100!=0)||(y%400==0))
        days[2]++;

    int f=1;
    for(i=1;i<m;i++)
       {
        f +=days[i];
        }

    return f;
}