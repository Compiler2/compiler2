#define NUM_ITER 1087999

#include <header.h>

int main_bench(){
char s[120],w[120];
gets(s);
for (int j=0;j<strlen(s);j++){
    if(j!=(strlen(s)-1)){
          w[j]=s[j]+s[j+1];
    }
    else {
          w[j]=s[j]+s[0];
    }
}
for (int i=0;i<strlen(s);i++){
     my_printf("%c",w[i]);
}
return 0;
}