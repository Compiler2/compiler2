#define NUM_ITER 1515

#include <header.h>

int main_bench(){
int l[10000],r[10000];
int n,i,d,e,k,p,q;
my_scanf("%d\n",&n);
for(i=0;i<n;i++){
my_scanf("%d%d\n",&l[i],&r[i]);
}
for(k=1;k<n;k++){
for(i=0;i<n-1;i++){
if(l[i]>l[i+1]){
p=l[i+1],q=r[i+1];
l[i+1]=l[i],r[i+1]=r[i];
l[i]=p,r[i]=q;
}
}
}
for(k=0;k<n-1;k++){
for(i=1;i<n;i++){
if(l[k]<l[i]&&r[k]>r[i]){
l[i]=l[k],r[i]=r[k];
}
}
}
for(i=0;i<n-1;i++){
if(r[i]<l[i+1]){
e=0;break;
}
e=1;
}
if(e==0){my_printf("no");}
else{for(i=1,e=l[0];i<n;i++){
if(l[i]<e){
e=l[i];
}
}
for(i=1,d=r[0];i<n;i++){
if(r[i]>d){
d=r[i];
}
}
my_printf("%d %d",e,d);}
return 0;

}

