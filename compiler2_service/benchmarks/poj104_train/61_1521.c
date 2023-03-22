#include <header.h>

int F(int n){
int a,b,i,s;
if(n==1){s=1;}
else if(n==2){s=1;}
else {
      a=1;
      b=1;
	  for(i=3;i<=n;i++){
      s=a+b;
	  a=b;
	  b=s;}}
return s;
}
int main_bench(){
int a[10000],i,n;
my_scanf("%d",&n);
for(i=1;i<=n;i++){
    my_scanf("%d",&a[i]);}
for(i=1;i<=n;i++){
    my_printf("%d\n",F(a[i])); }
return 0;
}