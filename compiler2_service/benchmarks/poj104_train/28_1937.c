#include <header.h>









int main_bench(){
    char s[10000];
    int i,num=0,final;
    gets(s);
    for (i=0; s[i]; i++) {
        if (s[i]!=' ') {
            num++;
            
        }else{
            if (num==0) {
            }else{
            my_printf("%d,",num);
            num=0;
            }
            
        
        }
    }
    my_printf("%d",num);
    return 0;
}
