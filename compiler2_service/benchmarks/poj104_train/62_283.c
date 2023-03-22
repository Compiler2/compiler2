#include <header.h>

int main_bench(){
       char s[205];
       char a[205];
       int i,m;
       gets(s);
       int len;
       i=0;
       len = strlen(s);
         for(int j = 0; j < len; j++) 
        {
           if (s[j]!=' ')
             a[i]=s[j];
           else if((s[j]=' ')&&(s[j+1]!=' '))
             a[i]=s[j];
           else continue;
            i++;
         }
         my_printf("%s",a);
       return 0;
}