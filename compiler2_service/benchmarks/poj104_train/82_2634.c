#define NUM_ITER 29150

#include <header.h>

int main_bench(){
int i,j,a[100],b[100],c[100],n,e;
my_scanf("%d",&n);
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
c[i]=0;
}
j=0;
for(i=0;i<n;i++){
if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) c[j]++;
if(!(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)) j++;
}
for(i=0;i<n-1;i++){
	if(c[i]>c[i+1]){
e=c[i];
c[i]=c[i+1];
c[i+1]=e;
	}
	}
my_printf("%d",c[n-1]);
return 0;
}