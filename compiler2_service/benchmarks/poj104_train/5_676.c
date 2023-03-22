#define NUM_ITER 946320

#include <header.h>

int main_bench()
{
    double a;
    int sum=0,i,l1,l2,judge=1;
    char x[1001],y[1001];
    my_scanf("%lf%s%s",&a,x,y);
    l1=strlen(x),l2=strlen(y);
    if (l1!=l2)
       judge=0;
    else 
       for (i=0;i<l1;i++)
       {
           if (x[i]!='C'&&x[i]!='G'&&x[i]!='A'&&x[i]!='T')
              judge=0;
           if (y[i]!='C'&&y[i]!='G'&&y[i]!='A'&&y[i]!='T')
              judge=0;
       }
    if (judge==1)
    {
       for (i=0;i<l1;i++)
            if (x[i]==y[i])
               sum++;
       if (sum>=(int)(a*l1))
          my_printf("yes");
       else
          my_printf("no");
    }
    else
      my_printf("error");
    return 0;
}
