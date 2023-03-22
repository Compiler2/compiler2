#include <header.h>


int main_bench()
{
    int m=0,i=0,j=0;
    char a[100][10],b;
    while(i<100)
    {my_scanf("%s",a[i++]);
    my_scanf("%c",&b);
    m++;
    if(b=='\n')
                        break;
    }
    for(i=1;i<=m-1;i++)
    {
    j=m-i;
    my_printf("%s ",a[j]);
    }
    my_printf("%s",a[0]);
    
    

  return 0;
}
