#define NUM_ITER 5116

#include <header.h>

int main_bench()
{int n,i,j,r,s,t;
 int a[50000],b[5000];
 my_scanf("%d",&n);
 for(i=0;i<n;i++){
     my_scanf("%d%d",&a[i],&b[i]);
 }
for(j=n-1;j>0;j--){
    for(r=0;r<j;r++){
        if(a[r]>a[r+1]){
            t=a[r+1];
            s=b[r+1];
            a[r+1]=a[r];
            b[r+1]=b[r];
            a[r]=t;
            b[r]=s;
        }
    }
}
t=0;
s=b[0];
for(i=0;i<n;i++){
    if(b[i]>s){
        s=b[i];
    }
}
     for(i=1;i<n;i++){
       for(j=0;j<i;j++){
  if(b[j]>=a[i]){
  t=t+1;
  break;}
     }}
    if(t!=n-1){
        my_printf("no");
    }
    if(t==n-1){
         my_printf("%d %d",a[0],s);
    }
    return 0;
}

