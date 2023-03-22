#define NUM_ITER 31377

#include <header.h>

int main_bench(){
int n,i,a,b,d,m;
my_scanf("%d",&n);
int c[n];
m=1;
c[m]=0;
for(i=0;i<n;i++){
    my_scanf("%d%d",&a,&b);
    if(a<=140&&a>=90&&b<=90&&b>=60){
       c[m]=c[m]+1;
    }else{
        m=m+1;
        c[m]=0;
    }
}
for(i=1;i<m;i++){
    if(c[i]>c[i+1]){
    d=c[i];
    c[i]=c[i+1];
    c[i+1]=d;
    }
}
my_printf("%d",c[m]);
return 0;
}
