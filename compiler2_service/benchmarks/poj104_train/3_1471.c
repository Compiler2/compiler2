#include <header.h>

int main_bench(){
int k,n,i,m,x,y,z,c;
c=0;
my_scanf("%d",&n);
my_scanf("%d",&k);
int a[n];
for(i=0;i<n;i++){
my_scanf("%d",&(a[i]));
}
for(i=0;i<n;i++){
for(x=0;x<n;x++){
if(x==i){
continue;
}
if(a[x]+a[i]==k){
c=1;
}
}
}
if(c==0)
{
my_printf("no");
}
else
{
my_printf("yes");
}
return 0;
}

