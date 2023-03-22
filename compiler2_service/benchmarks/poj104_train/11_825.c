#include <header.h>

int leap(int Y)
{
    if(Y%400==0)
    return 1;
    else if(Y%100==0)
    return 0;
    else if(Y%4==0)
    return 1;
    else
    return 0;
}
int main_bench()
{
    int Y,M,D;
    my_scanf("%d %d %d",&Y,&M,&D);
    if(leap(Y)==0)
    {
                  if(M==1)
                  my_printf("%d",D);
                  if(M==2)
                  my_printf("%d",31+D);
                  if(M==3)
                  my_printf("%d",31+28+D);
                  if(M==4)
                  my_printf("%d",31+28+31+D);
                  if(M==5)
                  my_printf("%d",31+28+31+30+D);
                  if(M==6)
                  my_printf("%d",31+28+31+30+31+D);
                  if(M==7)
                  my_printf("%d",31+28+31+30+31+30+D);
                  if(M==8)
                  my_printf("%d",31+28+31+30+31+30+31+D);
                  if(M==9)
                  my_printf("%d",31+28+31+30+31+30+31+31+D);
                  if(M==10)
                  my_printf("%d",31+28+31+30+31+30+31+31+30+D);
                  if(M==11)
                  my_printf("%d",31+28+31+30+31+30+31+31+30+31+D);
                  if(M==12)
                  my_printf("%d",31+28+31+30+31+30+31+31+30+31+30+D);
    }
    else
    {
                  if(M==1)
                  my_printf("%d",D);
                  if(M==2)
                  my_printf("%d",31+D);
                  if(M==3)
                  my_printf("%d",31+29+D);
                  if(M==4)
                  my_printf("%d",31+29+31+D);
                  if(M==5)
                  my_printf("%d",31+29+31+30+D);
                  if(M==6)
                  my_printf("%d",31+29+31+30+31+D);
                  if(M==7)
                  my_printf("%d",31+29+31+30+31+30+D);
                  if(M==8)
                  my_printf("%d",31+29+31+30+31+30+31+D);
                  if(M==9)
                  my_printf("%d",31+29+31+30+31+30+31+31+D);
                  if(M==10)
                  my_printf("%d",31+29+31+30+31+30+31+31+30+D);
                  if(M==11)
                  my_printf("%d",31+29+31+30+31+30+31+31+30+31+D);
                  if(M==12)
                  my_printf("%d",31+29+31+30+31+30+31+31+30+31+30+D);
    }
    getchar();
    getchar();
}