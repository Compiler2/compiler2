#define NUM_ITER 29867

#include <header.h>

int main_bench(){
int n,m;
char sb[24];
my_scanf("%d",&n);
for(int i=0;i<n;i++){
m=0;
my_scanf("%s",sb);
for(int k=0;sb[k]!='\0';k++){
if(!((sb[k]=='_')||(sb[k]>='0'&&sb[k]<='9')||(sb[k]>='a'&&sb[k]<='z')||(sb[k]>='A'&&sb[k]<='Z'))){
m=1;
}
}
if(!(sb[0]=='_'||(sb[0]>='a'&&sb[0]<='z')||(sb[0]>='A'&&sb[0]<='Z'))){
m=1;
}
if(m==1) my_printf("no\n");
else my_printf("yes\n");
}
return 0;
}