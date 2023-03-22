#include <header.h>

main_bench(){
int n,i,a[100],b[100];
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d",&a[i]);
}
int s=2;
b[0]=1;
b[1]=1;
for(i=0;i<n;i++){
if(a[i]<=2)
my_printf("1\n");
else{
for(s=2;s<a[i];s++){
int j=s-1;
int k=s-2;
b[s]=b[j]+b[k];
}
int m=a[i]-1;
my_printf("%d\n",b[m]);
}
}
}