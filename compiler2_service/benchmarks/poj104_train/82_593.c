#include <header.h>

int main_bench(){
    int n,x,y,a,s=0,i=1,u=0;
    my_scanf("%d",&n);
    while(i<=n){
     my_scanf("%d %d",&x,&y);
     if(x<=140&&x>=90&&y<=90&&y>=60){
      s++;
      }
       if(s>u){
       u=s;
       }
      if(x>140||x<90||y>90||y<60){
       s=0;
       }
       i++;
     }
      my_printf("%d",u);
      return 0;
}