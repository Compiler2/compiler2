#define NUM_ITER 26430

#include <header.h>

int main_bench(){
int i,k,n,q,w;
char a[100][21];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%s",a[i]);}
for(i=0;i<n;i++){
q=strlen(a[i]);
w=0;
for(k=0;k<q;k++){
if(k==0&&(a[i][k]==95||(a[i][k]>=97&&a[i][k]<=122)||(a[i][k]>=65&&a[i][k]<=90))){w++;}
if(k!=0&&(a[i][k]==95||(a[i][k]>=97&&a[i][k]<=122)||(a[i][k]>=48&&a[i][k]<=57)||(a[i][k]>=65&&a[i][k]<=90))){w++;}
}
if(w==q){my_printf("yes\n");}
else{my_printf("no\n");}
}
return 0;
}