#include <header.h>

int main_bench()
{int i;
 char a[200],*p,*head;
 p=a;
 head=a;
 gets(a);
 i=strlen(a);

 for(p=a;p<a+i-1;p++){
                            my_printf("%c",*p+*(p+1));
                            }
 my_printf("%c",*p+*head);
   my_scanf("%d",&i);
return 0;
}
