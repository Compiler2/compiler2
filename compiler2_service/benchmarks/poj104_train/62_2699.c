#include <header.h>

int main_bench()
{ 

 char a[10000];
 gets(a);
 for(int i=0;i<strlen(a);i++){
       if(a[i]!=' '){
                   my_printf("%c",a[i]);
                   }
       else if(a[i]==' '&&a[i+1]!=' '){
            my_printf("%c",a[i]);
            }
                  }
                                      

    return 0;
}
