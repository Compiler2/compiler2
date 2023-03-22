#include <header.h>



main_bench()
{
int a,t,day,q;
int i[12]={31,28,31,30,31,30,31,31,30,31,30,31};
t=0;
q=1;
my_scanf("%d",&a);
for(day=1;day<=365;day++)
{
                  if(a>7)
                  {
                         a=a-7;
                  }
                  if(q>i[t])
                  {
                             q=q-i[t];
                             t=t+1;
                  }
                  if(q==13)
                  {   if(a==5)
                      my_printf("%d\n",t+1);
                  }
                  a=a+1;
                  q=q+1;
}

}
