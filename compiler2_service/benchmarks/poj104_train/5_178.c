#include <header.h>

int main_bench(){
    double a;
    my_scanf("%lf",&a);
    char b[600],c[600];
    getchar();
    gets(b);
    gets(c);
    int d,e,f,g;
    int h=0;
    d=strlen(b);
    e=strlen(c);
    if(d!=e){
             my_printf("error");
             }
    else{
         for(int i=0;i<=d-1;i++){
                 if(b[i]!='A'&&b[i]!='G'&&b[i]!='C'&&b[i]!='T'){
                                                                f=1;}
                                                                 if(c[i]!='A'&&c[i]!='G'&&c[i]!='C'&&c[i]!='T'){
                                                                g=1;}
                                                                }
         if(f==1||g==1){
                        my_printf("error");}
         else{
              for(int i=0;i<=d-1;i++){
                      if(b[i]==c[i]){
                                     h++;}}
                   
              if(1.0*h/d>a){
                            my_printf("yes");}
              else{
                   my_printf("no");}}}
    int y;
    my_scanf("%d",&y);
             return 0;}
    
