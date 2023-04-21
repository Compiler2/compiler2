#define NUM_ITER 821881

#include <header.h>

int main_bench(){
    int i,m,n,a,b,k;
    k=0;
    a=0;
    b=0;
    double p;
    char f[501],g[501];
    my_scanf("%lf %s %s",&p,f,g);
    m=strlen(f);
    n=strlen(g);
    for(i=0;i<m;i++){
        if(f[i]!='A'&&f[i]!='T'&&f[i]!='C'&&f[i]!='G'){a++;}
    }
    for(i=0;i<n;i++){
        if(g[i]!='A'&&g[i]!='T'&&g[i]!='C'&&g[i]!='G'){b++;}
    }
    if(m!=n||a!=0||b!=0){my_printf("error");}
    else{for(i=0;i<m;i++){
             if(f[i]==g[i]){k++;}
         }
        if(1.0*k/m>p){my_printf("yes");}
        else{my_printf("no");}
        }
    return 0;
}