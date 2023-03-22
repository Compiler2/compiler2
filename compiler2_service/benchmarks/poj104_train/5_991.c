#include <header.h>

int main_bench(){
    double n,p;
    int m,i,j,c=0,q,d=0,f=0,k=0;
    char u[2][1000];
    my_scanf("%lf",&n);
    for(i=0;i<2;i++){
    my_scanf("%s",u[i]);
}

q=strlen(u[1]);
m=strlen(u[0]);
if(m!=q){
         my_printf("error");
         return 0;
         }

for(j=0;j<m;j++){
if(u[0][j]!='A'&&u[0][j]!='T'&&u[0][j]!='C'&&u[0][j]!='G'){
f++;
}
}
for(j=0;j<q;j++){
if(u[1][j]!='A'&&u[1][j]!='T'&&u[1][j]!='C'&&u[1][j]!='G'){
f++;
}
}

if(f!=0){
my_printf("error");
return 0;
}

for(j=0;j<m;j++){
if(u[0][j]==u[1][j]){
c++;
}
}

p=(1.0*c)/m;
if(p>=n){
        my_printf("yes");
        }
if(p<n){
              my_printf("no");
              }
              return 0;
              }