#define NUM_ITER 877462

#include <header.h>

int main_bench(){
int i,k,l,s=0,p=0;
double n,m;
char a[600],b[600];
my_scanf("%lf",&n);
my_scanf("%s%s",&a,&b);
k=strlen(a),l=strlen(b);
for(i=0;i<k;i++){
    if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
        p++;
    }
}
for(i=0;i<k;i++){
    if(a[i]==b[i]){
        s++;
    }
}
m=1.0*s/k;
if((k==l)&&(p==0)&&(m>n)){
    my_printf("yes");
}
else if((k==l)&&(p==0)&&(m<=n)){
    my_printf("no");
}
else{
    my_printf("error");
}
return 0;
}