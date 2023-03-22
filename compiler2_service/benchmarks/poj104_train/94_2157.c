#include <header.h>

int main_bench(){int i,j,l,cout=0,n,c,k;
int a[500];my_scanf("%d",&n);
for(i=0;i<=n-1;i++){my_scanf("%d",&c);if(c%2!=0){a[cout]=c;cout++;}}

for(j=0;j<=cout-2;j++){for(k=cout-1;k>j;k--){if(a[k]<a[k-1]){a[k]=a[k]+a[k-1];a[k-1]=a[k]-a[k-1];a[k]=a[k]-a[k-1];}}}
for(l=0;l<=cout-2;l++){my_printf("%d,",a[l]);}my_printf("%d",a[cout-1]);return 0;}