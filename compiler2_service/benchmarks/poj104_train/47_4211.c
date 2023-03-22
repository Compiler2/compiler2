#include <header.h>

int main_bench(){
 int n,i,b;
 my_scanf("%d",&n);
 int a[n];
for(i=0;i<n;i++){my_scanf("%d",&a[i]);}

for(i=n-1;i>=0;i--){my_printf("%d",a[i]);
if(i!=0){my_printf(" ");}
}
 return 0;
}