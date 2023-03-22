#include <header.h>

int main_bench()
{
    int a,b,c;
    my_scanf("%d %d %d",&a,&b,&c);
    if((a%100!=0&&a%4==0)||(a%400==0))
    {
                                      if(b==1)
                                      my_printf("%d",c);
                                     else if(b==2)
                                      my_printf("%d",c+31);
                                      else if(b==3)
                                      my_printf("%d",c+60);
                                      else if(b==4)
                                      my_printf("%d",c+91);
                                       else if(b==5)
                                      my_printf("%d",c+121);
                                       else if(b==6)
                                      my_printf("%d",c+152);
                                       else if(b==7)
                                      my_printf("%d",c+182);
                                       else if(b==8)
                                      my_printf("%d",c+213);
                                       else if(b==9)
                                      my_printf("%d",c+244);
                                       else if(b==10)
                                      my_printf("%d",c+274);
                                       else if(b==11)
                                      my_printf("%d",c+305);
                                      else my_printf("%d",c+335);
    }
    else
    {
                                      if(b==1)
                                      my_printf("%d",c);
                                     else if(b==2)
                                      my_printf("%d",c+31);
                                      else if(b==3)
                                      my_printf("%d",c+59);
                                      else if(b==4)
                                      my_printf("%d",c+90);
                                       else if(b==5)
                                      my_printf("%d",c+120);
                                       else if(b==6)
                                      my_printf("%d",c+152);
                                       else if(b==7)
                                      my_printf("%d",c+181);
                                       else if(b==8)
                                      my_printf("%d",c+212);
                                       else if(b==9)
                                      my_printf("%d",c+243);
                                       else if(b==10)
                                      my_printf("%d",c+273);
                                       else if(b==11)
                                      my_printf("%d",c+304);
                                      else my_printf("%d",c+334);
    }
    getchar();
    getchar();
}