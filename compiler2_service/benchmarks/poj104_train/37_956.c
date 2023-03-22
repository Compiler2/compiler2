#include <header.h>

int main_bench(){
int n,i,k,h,m,p;
h=0;
p=0;
char a[100000];
my_scanf("%d",&n);
for(i=1;i<=n;i++){
my_scanf("%s",a);
for(k=0;a[k]!='\0';k++){
for(m=0;a[m]!='\0';m++){
if(a[k]==a[m]){
h=h+1;
}
}
if(h==1){
my_printf("%c\n",a[k]);
p=1;
break;
}
h=0;
}
if(p==0){
my_printf("no\n");
}
p=0;
h=0;
}
return 0;
}

