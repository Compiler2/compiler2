#define NUM_ITER 3595

#include <header.h>

int main_bench(){
int i,j,n,q,t,t1,t2;
int a[10001],b[10001];
my_scanf("%d",&n);
q=0;
for (i=1;i<=n;i++)
my_scanf("%d%d",&a[i],&b[i]);
for (i=1;i<=n;i++)
for (j=1;j<=n-1;j++)
if (a[j]>a[j+1]){
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
t=b[j];
b[j]=b[j+1];
b[j+1]=t;
}
t1=a[1];
t2=b[1];
for (i=2;i<=n;i++){
if ((b[i]<t1)||(t2<a[i]))
q=q+1;
if (a[i]<t1)
t1=a[i];
if (b[i]>t2)
t2=b[i];
}
if (q==0) 
 my_printf("%d %d",t1,t2);
else my_printf("no");
return 0;
}