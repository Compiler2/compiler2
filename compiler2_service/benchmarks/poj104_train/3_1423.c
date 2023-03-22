#define NUM_ITER 3231

#include <header.h>

int main_bench(){ 
int n,k,i; 
int a[1000]; 
int b[1000]; 
my_scanf("%d%d",&n,&k); 
for(i=0;i<n;i++){ 
my_scanf("%d",&a[i]); 
} 
int p=0,s=0,d=0; 
for(i=0;i<n;i++){ 
b[p]=a[i]; p++; 
} 
for(p=0;p<n;p++){ 
for(i=0;i<n;i++){ 
if(b[p]+a[i]==k){ 
s++; 
if(p==i){ 
d++; 
} 
} 
} 
} 
if((s-d)!=0){
my_printf("yes");
} 
else{
my_printf("no"); 
} 
return 0; 
}
