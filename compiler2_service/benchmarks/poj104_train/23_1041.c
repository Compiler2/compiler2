#define NUM_ITER 1307594

#include <header.h>

int main_bench()
{
char a[100],*p=a,*t=a;
int n;
gets(a);
n=strlen(a);
    for(p=p+n-1;p>=a;)
       {
        if((*p)==' ')
             { for(t=p+1;(*t)!='\0';t++)
               my_printf("%c",*t);
               my_printf(" ");
               *p='\0';
                p--;}
        else p--;}
p=a;
my_printf("%s",p);
}
      