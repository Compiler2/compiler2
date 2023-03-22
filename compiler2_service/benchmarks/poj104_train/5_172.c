#define NUM_ITER 900400

#include <header.h>

int main_bench(){
double c,w=0,n=0;
char x[600],y[600];
my_scanf("%lf",&c);
getchar();
gets(x);
gets(y);
if (strlen(x)==strlen(y)){
for (int j=0;j<strlen(x);j++){
    if ((x[j]!='A'&&x[j]!='T'&&x[j]!='G'&&x[j]!='C')||(y[j]!='A'&&y[j]!='T'&&y[j]!='G'&&y[j]!='C')){
                  my_printf("error");
                  n=1;
                  break;
    }
    if(x[j]==y[j]){
          w++;
    }
 }
}
else {
     my_printf("error");
     n=1;
}
if (n==0){
    w=w/strlen(x);
    if (c<w){
              my_printf("yes");
    }
    else {
              my_printf("no");
    }
}
return 0;
}