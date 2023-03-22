#define NUM_ITER 37538

#include <header.h>

int main_bench() {
int n,i;
int c=0;
int d=0;
my_scanf("%d",&n);
int a[n],b[n];
for(i=0;i<n;i++){
my_scanf("%d%d",&a[i],&b[i]);
if(a[i]==0){
if(b[i]==1) c++;
if(b[i]==2) d++;
}
if(a[i]==1){
if(b[i]==2) c++;
if(b[i]==0) d++;
}
if(a[i]==2){
if(b[i]==0) c++;
if(b[i]==1) d++;
}
}
if(c>d) my_printf("A");
if(c<d) my_printf("B");
if(c==d) my_printf("Tie");
return 0;
}
