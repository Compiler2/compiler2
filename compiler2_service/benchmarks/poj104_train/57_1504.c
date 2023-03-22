#include <header.h>

int main_bench()
{
    int n,i,b;
    char a[50],*p,d;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
{
    my_scanf("%s",&a);
       b=strlen(a) ;
       p=&a[b-2];
       if((*p=='l')||(*p=='e'))
       {
            *p='\0';
            my_printf("%s\n",a);
       }
       else
       {
          p=&a[b-3];
          *p='\0';
        my_printf("%s\n",a);
       }
    }
     my_scanf("%s",&d);
     return 0;
}