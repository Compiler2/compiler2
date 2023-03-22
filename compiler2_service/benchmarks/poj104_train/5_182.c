#define NUM_ITER 722121

#include <header.h>

int main_bench(){
    char a[100],b[100],c[100],x,y;
    int i,j,k,m,n=0,z=0;
    double o,p;
    my_scanf("%lf",&p);
    gets(a);
    gets(b);
    gets(c);
    m=strlen(b);
    k=strlen(c);
    if(m!=k){
      my_printf("error");
      z=1;
      }
    if(z==0){
      for(i=0;i<m;i++){
        if((b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')||
           (c[i]!='A'&&c[i]!='T'&&c[i]!='G'&&c[i]!='C')){
           my_printf("error");
           z=1;
           break;
           }
        }
      }
    if(z==0){
      for(i=0;i<m;i++){
         if(b[i]==c[i])n++;
         }
      o=1.0*n/m;
      if(o>p)my_printf("yes");
      else{my_printf("no");}
      }
    my_scanf("%d",&j);
    return 0;
}
