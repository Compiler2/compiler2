#include <header.h>

int main_bench(){
     int len,i;
     char s[100];
     gets(s);
     len=strlen(s);
     if(s[0]!=' '){ my_printf("%c",s[0]); }
     for(i=1;i<len;i++){
          if(s[i]!=' '){ my_printf("%c",s[i]);  continue;}
          if(s[i-1]!=' '&&s[i]==' '){ my_printf("%c",s[i]); continue;}
          if(s[i-1]==' '&&s[i]==' '){continue;}
     }
     return 0;
}