#include <header.h>

int main_bench()
{
    int i,l,p;
    double n,m=0,b;
    char d[501],f[501];
    my_scanf("%lf",&n);
    my_scanf("%s",d);
    my_scanf("%s",f);
    l=strlen(d);
    p=strlen(f);
    if(l!=p){my_printf("error");
               
               return 0;}
    for(i=0;d[i];i++){
        if(!(d[i]=='A'||d[i]=='T'||d[i]=='G'||d[i]=='C')){
            my_printf("error");
            
            return 0;}}
    for(i=0;f[i];i++){
        if(!(f[i]=='A'||f[i]=='T'||f[i]=='G'||f[i]=='C')){
            my_printf("error");
            
            return 0;}}
    for(i=0;d[i];i++){
        if(d[i]==f[i])m++;}
    b=m/l;
    if(b>=n)my_printf("yes");
    else my_printf("no");
    
    return 0;
}
