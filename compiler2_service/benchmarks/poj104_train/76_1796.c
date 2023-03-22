#define NUM_ITER 4375

#include <header.h>

int main_bench(){
int n,a[50000],b[50000],i,k,c,d,isTrue=1;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d %d",&a[i],&b[i]);
}
for(k=1;k<=n;k++){
for(i=0;i<n-k;i++){
if(a[i]>a[i+1]){
c=a[i];
d=b[i];
a[i]=a[i+1];
b[i]=b[i+1];
a[i+1]=c;
b[i+1]=d;
}
}
}
for(i=0;i<n-1;i++){
if(b[i]<a[i+1]){
isTrue=0;
break;
}else{
if(b[i+1]<b[i]){
b[i+1]=b[i];
isTrue++;
}
}
}
if(isTrue==0){
my_printf("no");
}else{
my_printf("%d %d",a[0],b[n-1]);
}
return 0;
}

