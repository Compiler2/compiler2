#define NUM_ITER 811797

#include <header.h>

int main_bench(){
    char s[100],a[100],b[100];
    int i,l1,l2,e=0;
    gets(s);
    my_scanf("%s %s",a,b);
    getchar();
    l1=strlen(s);
    l2=strlen(a);
    for(i=0;i<l1;i++){
      if(i==0){
         if(a[0]==s[i]&&a[l2-1]==s[i+l2-1]&&s[i+l2]==' '){
              my_printf("%s", b);
              i +=l2-1;
         }else {
               my_printf("%c", s[i]);
               
         }
      }else{
          if(a[0]==s[i]&&a[l2-1]==s[i+l2-1]&&s[i-1]==' '){
              my_printf("%s", b);
              i +=l2-1;
         }else {
               my_printf("%c", s[i]);
               
         }  
      }
    }
    my_printf("\n");
    getchar();
    return 0;
}

