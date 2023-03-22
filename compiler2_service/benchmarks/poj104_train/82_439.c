#define NUM_ITER 34998

#include <header.h>


int main_bench(){
    int n,i,a,b,c,s=0,t=0;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
      my_scanf("%d %d",&a,&b);
      if( (a>=90&&a<=140)&&(b>=60&&b<=90) ){
        t++;
        c=1;
      }
      else if(!( (a>=90&&a<=140)&&(b>=60&&b<=90) )){
        t=0;
      }
      if(t>s){s=t;}
    }
    my_printf("%d",s);

    return 0;
}
