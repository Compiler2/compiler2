#define NUM_ITER 1349565

#include <header.h>

int main_bench(){
    char str[10000];
    int i,a,n,b;
a=0;
b=0;
gets(str);
n=strlen(str);
for(i=0;i<n;i++){
    if(str[i]==' '){
        b=1;
    }
}
if(b==1){
for(i=0;str[i]!='\0';i++){
      if(str[i]!=' '){
      a=a+1;
      }
      else if((str[i]==' ')&&(str[i+1]!=' ')){
          my_printf("%d,",a);
          a=0;
      }
    }
a=0;
for(i=n-1;str[i]!=' ';i--){
        a=a+1;
    }
    my_printf("%d",a);
}
else if(b==0){
    my_printf("%d",n);
}
    return 0;
}