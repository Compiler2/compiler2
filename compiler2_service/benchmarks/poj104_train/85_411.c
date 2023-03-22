#include <header.h>

int i,n;
char str[21],*q;
int main_bench(){
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%s",str);
        q=str;
        if((*q!=95)&&((*q<65)||(*q>90)&&(*q<97)||(*q>122))){
            my_printf("no\n");
            continue;
        }
        
        else{
          q++;
          while(*q!='\0'){
            if((*q!=95)&&((*q<48)||(*q>57)&&(*q<65)||(*q>90)&&(*q<97)||(*q>122))){
                my_printf("no\n");
                break;
            }
            q++;
          }
        if(*q=='\0')
            my_printf("yes\n");
        }
    }


return 0;
}
