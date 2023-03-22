#include <header.h>

int main_bench()
{
   char a[105];
   int i;
   gets(a);
   for(i=0;a[i]!='\0';i++){
       if(a[i]!=' '){
          my_printf("%c",a[i]);
       }else if((a[i]==' ')&&(a[i+1]!=' ')){
          my_printf(" ");
       }
    }
    return 0;
}