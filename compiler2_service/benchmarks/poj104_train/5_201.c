#define NUM_ITER 1104399

#include <header.h>

int main_bench(){
    char  sz[2][510];
    double a,e;
    int b,c,d,f;
    int s[2];
    d=0;
    my_scanf("%lf",&a);
    for(b=0;b<2;b++){
         my_scanf("%s",&sz[b]); 
         s[b]=strlen(sz[0]);
         for(f=0;f<s[b];f++){
              if(sz[b][f]!='A'&&sz[b][f]!='T'&&sz[b][f]!='G'&&sz[b][f]!='C'){
                      my_printf("error");
                      return 0;
              }
         }
    }
    if(s[0]!=s[1]){
        my_printf("error\n");
        return 0;
    }
   
    for(b=0;b<s[0];b++){
        if(sz[0][b]==sz[1][b]){
            d++;
        }
    }
    e=1.0*d/s[0];
    if(e>a){
        my_printf("yes\n");
    }
    else{
        my_printf("no\n");
    }
    return 0;
}