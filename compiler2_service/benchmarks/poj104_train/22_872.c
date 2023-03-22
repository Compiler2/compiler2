#include <header.h>


int main_bench()
{
    int a=0,b,c=0;
    char d;
    do 
    {
                  my_scanf("%d%c",&b,&d);
                  if(a>b)
                  {
                         if(b>c)
                         c=b;
                  }
                  if(a<b)
                  {
                      if(a>c)
                      c=a;
                      a=b;
                  }

    }while(d==',');
    if(a==c || c==0)
    my_printf("No");
    else
    my_printf("%d",c);
    return 0;
}
